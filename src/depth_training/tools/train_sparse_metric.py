from __future__ import annotations

import argparse
import json
import random
from pathlib import Path

import numpy as np
import torch
import torch.nn.functional as F
from torch.optim import AdamW
from torch.utils.data import DataLoader

from seepersea_common import SparseMetricDataset, build_model, metric_sums, reduce_metrics


def sparse_loss(pred: torch.Tensor, target: torch.Tensor, mask: torch.Tensor) -> torch.Tensor:
    pred_valid = pred[mask].clamp_min(1e-3)
    target_valid = target[mask].clamp_min(1e-3)
    if pred_valid.numel() < 10:
        raise ValueError("batch has fewer than 10 valid supervised pixels")
    log_l1 = (torch.log(pred_valid) - torch.log(target_valid)).abs().mean()
    abs_rel = ((pred_valid - target_valid).abs() / target_valid).mean()
    return log_l1 + 0.25 * abs_rel


@torch.inference_mode()
def evaluate(model, loader, device, min_depth, max_depth):
    model.eval()
    parts = []
    for batch in loader:
        image = batch["image"].to(device)
        target = batch["depth"].to(device)
        mask = batch["mask"].to(device) & (target >= min_depth) & (target <= max_depth)
        pred = model(image)
        pred = F.interpolate(pred[:, None], target.shape[-2:], mode="bilinear", align_corners=True)[:, 0]
        parts.append(metric_sums(pred, target, mask))
    return reduce_metrics(parts)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--manifest", type=Path, required=True)
    parser.add_argument("--model-root", type=Path, required=True)
    parser.add_argument("--pretrained", type=Path, required=True)
    parser.add_argument("--save-dir", type=Path, required=True)
    parser.add_argument("--freeze-encoder", action="store_true")
    parser.add_argument("--epochs", type=int, default=10)
    parser.add_argument("--batch-size", type=int, default=1)
    parser.add_argument("--image-size", type=int, default=518)
    parser.add_argument("--min-depth", type=float, default=1.0)
    parser.add_argument("--max-depth", type=float, default=80.0)
    parser.add_argument("--lr", type=float, default=1e-4)
    parser.add_argument("--seed", type=int, default=20261031)
    args = parser.parse_args()

    if args.batch_size != 1:
        raise ValueError(
            "This leakage-safe baseline preserves image aspect ratio and currently requires --batch-size 1. "
            "Use gradient accumulation in a later controlled experiment if needed."
        )

    random.seed(args.seed)
    np.random.seed(args.seed)
    torch.manual_seed(args.seed)
    if torch.cuda.is_available():
        torch.cuda.manual_seed_all(args.seed)
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

    train_data = SparseMetricDataset(args.manifest, "train", args.image_size, augment=True)
    val_data = SparseMetricDataset(args.manifest, "val", args.image_size, augment=False)
    train_sequences = {row["sequence_id"] for row in train_data.rows}
    val_sequences = {row["sequence_id"] for row in val_data.rows}
    overlap = train_sequences & val_sequences
    if overlap:
        raise ValueError(f"Sequence leakage between train and val: {sorted(overlap)}")
    train_loader = DataLoader(train_data, batch_size=args.batch_size, shuffle=True, num_workers=0)
    val_loader = DataLoader(val_data, batch_size=1, shuffle=False, num_workers=0)

    model = build_model(args.model_root, args.max_depth, args.pretrained).to(device)
    if args.freeze_encoder:
        for parameter in model.pretrained.parameters():
            parameter.requires_grad = False
    parameters = [parameter for parameter in model.parameters() if parameter.requires_grad]
    optimizer = AdamW(parameters, lr=args.lr, betas=(0.9, 0.999), weight_decay=0.01)
    scaler = torch.amp.GradScaler("cuda", enabled=device.type == "cuda")

    args.save_dir.mkdir(parents=True, exist_ok=True)
    (args.save_dir / "config.json").write_text(
        json.dumps({**vars(args), "manifest": str(args.manifest), "model_root": str(args.model_root),
                    "pretrained": str(args.pretrained), "save_dir": str(args.save_dir)}, default=str, indent=2),
        encoding="utf-8",
    )
    best_mae = float("inf")
    history = []
    for epoch in range(1, args.epochs + 1):
        model.train()
        if args.freeze_encoder:
            model.pretrained.eval()
        losses = []
        skipped = 0
        for batch in train_loader:
            image = batch["image"].to(device)
            target = batch["depth"].to(device)
            mask = batch["mask"].to(device) & (target >= args.min_depth) & (target <= args.max_depth)
            if int(mask.sum()) < 10:
                skipped += 1
                continue
            optimizer.zero_grad(set_to_none=True)
            with torch.autocast(device_type=device.type, dtype=torch.float16, enabled=device.type == "cuda"):
                pred = model(image)
                pred = F.interpolate(pred[:, None], target.shape[-2:], mode="bilinear", align_corners=True)[:, 0]
                loss = sparse_loss(pred, target, mask)
            scaler.scale(loss).backward()
            scaler.step(optimizer)
            scaler.update()
            losses.append(float(loss.item()))
        metrics = evaluate(model, val_loader, device, args.min_depth, args.max_depth)
        record = {
            "epoch": epoch,
            "train_loss": sum(losses) / max(len(losses), 1),
            "skipped_batches": skipped,
            "val": metrics,
        }
        history.append(record)
        checkpoint = {
            "model": model.state_dict(),
            "optimizer": optimizer.state_dict(),
            "epoch": epoch,
            "best_mae": min(best_mae, metrics.get("mae_m", float("inf"))),
        }
        torch.save(checkpoint, args.save_dir / "last.pth")
        if metrics.get("mae_m", float("inf")) < best_mae:
            best_mae = metrics["mae_m"]
            torch.save(checkpoint, args.save_dir / "best.pth")
        (args.save_dir / "history.json").write_text(json.dumps(history, indent=2), encoding="utf-8")
        print(json.dumps(record, ensure_ascii=False))


if __name__ == "__main__":
    main()


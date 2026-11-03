from __future__ import annotations

import argparse
import json
from pathlib import Path

import numpy as np
import torch
import torch.nn.functional as F
from torch.utils.data import DataLoader

from seepersea_common import SparseMetricDataset, build_model, metric_sums, reduce_metrics


@torch.inference_mode()
def predict(model, batch, device):
    image = batch["image"].to(device)
    target = batch["depth"].to(device)
    pred = model(image)
    pred = F.interpolate(pred[:, None], target.shape[-2:], mode="bilinear", align_corners=True)[:, 0]
    return pred, target, batch["mask"].to(device)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--manifest", type=Path, required=True)
    parser.add_argument("--model-root", type=Path, required=True)
    parser.add_argument("--checkpoint", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--image-size", type=int, default=518)
    parser.add_argument("--min-depth", type=float, default=1.0)
    parser.add_argument("--max-depth", type=float, default=80.0)
    args = parser.parse_args()

    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    model = build_model(args.model_root, args.max_depth, args.checkpoint).to(device).eval()
    train = DataLoader(SparseMetricDataset(args.manifest, "train", args.image_size), batch_size=1, num_workers=0)
    val = DataLoader(SparseMetricDataset(args.manifest, "val", args.image_size), batch_size=1, num_workers=0)

    log_ratios = []
    with torch.inference_mode():
        for batch in train:
            pred, target, mask = predict(model, batch, device)
            mask = mask & (target >= args.min_depth) & (target <= args.max_depth)
            if mask.any():
                values = torch.log(target[mask].clamp_min(1e-3)) - torch.log(pred[mask].clamp_min(1e-3))
                log_ratios.append(values.cpu().numpy())
    if not log_ratios:
        raise RuntimeError("No valid training points for scale fitting")
    scale = float(np.exp(np.median(np.concatenate(log_ratios))))

    parts = []
    with torch.inference_mode():
        for batch in val:
            pred, target, mask = predict(model, batch, device)
            mask = mask & (target >= args.min_depth) & (target <= args.max_depth)
            parts.append(metric_sums(pred * scale, target, mask))
    result = {
        "method": "single_global_multiplicative_scale",
        "fit_split": "train",
        "evaluation_split": "val",
        "scale": scale,
        "metrics": reduce_metrics(parts),
        "note": "Scale was fitted once on train only and frozen for validation; no per-image alignment.",
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, indent=2), encoding="utf-8")
    print(json.dumps(result, indent=2))


if __name__ == "__main__":
    main()


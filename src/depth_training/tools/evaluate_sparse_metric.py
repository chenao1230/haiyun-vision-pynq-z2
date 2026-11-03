from __future__ import annotations

import argparse
import json
import time
from pathlib import Path

import torch
import torch.nn.functional as F
from torch.utils.data import DataLoader

from seepersea_common import SparseMetricDataset, build_model, metric_sums, reduce_metrics


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--manifest", type=Path, required=True)
    parser.add_argument("--split", choices=["train", "val", "test"], default="val")
    parser.add_argument("--model-root", type=Path, required=True)
    parser.add_argument("--checkpoint", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--image-size", type=int, default=518)
    parser.add_argument("--min-depth", type=float, default=1.0)
    parser.add_argument("--max-depth", type=float, default=80.0)
    parser.add_argument("--scale", type=float, default=1.0)
    args = parser.parse_args()

    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    dataset = SparseMetricDataset(args.manifest, args.split, args.image_size, augment=False)
    loader = DataLoader(dataset, batch_size=1, shuffle=False, num_workers=0)
    model = build_model(args.model_root, args.max_depth, args.checkpoint).to(device).eval()

    per_frame = []
    timings = []
    with torch.inference_mode():
        for index, batch in enumerate(loader):
            image = batch["image"].to(device)
            target = batch["depth"].to(device)
            mask = batch["mask"].to(device) & (target >= args.min_depth) & (target <= args.max_depth)
            if index < 3:
                _ = model(image)
            if device.type == "cuda":
                torch.cuda.synchronize()
            start = time.perf_counter()
            pred = model(image)
            pred = F.interpolate(pred[:, None], target.shape[-2:], mode="bilinear", align_corners=True)[:, 0]
            if device.type == "cuda":
                torch.cuda.synchronize()
            timings.append(1000.0 * (time.perf_counter() - start))
            pred = pred * args.scale
            part = metric_sums(pred, target, mask)
            per_frame.append(
                {
                    "sequence_id": batch["sequence_id"][0],
                    "frame_id": batch["frame_id"][0],
                    **part,
                }
            )

    result = {
        "split": args.split,
        "checkpoint": str(args.checkpoint.resolve()),
        "fixed_scale": args.scale,
        "depth_definition": "camera_forward_Z_m",
        "metrics": reduce_metrics(per_frame),
        "mean_inference_ms": sum(timings) / len(timings),
        "frame_count": len(per_frame),
        "per_frame": per_frame,
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=2), encoding="utf-8")
    print(json.dumps({key: value for key, value in result.items() if key != "per_frame"}, indent=2))


if __name__ == "__main__":
    main()


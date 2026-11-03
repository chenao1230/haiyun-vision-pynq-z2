from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path

import cv2
import numpy as np

from seepersea_common import (
    parse_calibration,
    project_sparse_z,
    read_pcd_xyz,
    render_overlay,
    write_jsonl,
)


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for block in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--data-root", type=Path, required=True)
    parser.add_argument("--output-root", type=Path, required=True)
    parser.add_argument("--split-map", type=Path, required=True)
    parser.add_argument("--manifest", type=Path, required=True)
    parser.add_argument("--min-z", type=float, default=1.0)
    parser.add_argument("--max-z", type=float, default=120.0)
    parser.add_argument("--min-points", type=int, default=20)
    parser.add_argument("--overlay-count", type=int, default=12)
    parser.add_argument("--limit", type=int, default=0)
    args = parser.parse_args()

    split_map = json.loads(args.split_map.read_text(encoding="utf-8"))
    allowed = {"train", "val", "test", "unassigned"}
    invalid = set(split_map.values()) - allowed
    if invalid:
        raise ValueError(f"Invalid split values: {sorted(invalid)}")

    rows = []
    failures = []
    overlay_left = args.overlay_count
    for sequence in sorted(path for path in args.data_root.iterdir() if path.is_dir()):
        split = split_map.get(sequence.name, "unassigned")
        image_dir = sequence / "undist_images" / "CAM_FRONT"
        cloud_dir = sequence / "point_clouds"
        calib_dir = sequence / "calib"
        if not image_dir.exists() or not cloud_dir.exists() or not calib_dir.exists():
            failures.append({"sequence": sequence.name, "reason": "missing required modality directory"})
            continue
        frame_ids = sorted(
            set(path.stem for path in image_dir.glob("*.png"))
            & set(path.stem for path in cloud_dir.glob("*.pcd"))
            & set(path.stem for path in calib_dir.glob("*.txt"))
        )
        if args.limit:
            frame_ids = frame_ids[: args.limit]
        for frame_id in frame_ids:
            image_path = image_dir / f"{frame_id}.png"
            cloud_path = cloud_dir / f"{frame_id}.pcd"
            calib_path = calib_dir / f"{frame_id}.txt"
            try:
                image = cv2.imread(str(image_path), cv2.IMREAD_COLOR)
                if image is None:
                    raise ValueError("image decode failed")
                k, tr = parse_calibration(calib_path)
                xyz = read_pcd_xyz(cloud_path)
                depth, mask, _ = project_sparse_z(
                    xyz, k, tr, image.shape[:2], min_z=args.min_z, max_z=args.max_z
                )
                valid_points = int(mask.sum())
                if valid_points < args.min_points:
                    raise ValueError(f"only {valid_points} projected points")
                label_dir = args.output_root / sequence.name / "labels"
                label_dir.mkdir(parents=True, exist_ok=True)
                label_path = label_dir / f"{frame_id}.npz"
                np.savez_compressed(
                    label_path,
                    depth_z_m=depth,
                    valid_mask=mask,
                    K=k,
                    T_camera_from_lidar=tr,
                )
                if overlay_left > 0:
                    overlay_dir = args.output_root / sequence.name / "overlays"
                    overlay_dir.mkdir(parents=True, exist_ok=True)
                    cv2.imwrite(str(overlay_dir / f"{frame_id}.jpg"), render_overlay(image, depth, mask))
                    overlay_left -= 1
                rows.append(
                    {
                        "sequence_id": sequence.name,
                        "frame_id": frame_id,
                        "split": split,
                        "image": str(image_path.resolve()),
                        "point_cloud": str(cloud_path.resolve()),
                        "calibration": str(calib_path.resolve()),
                        "label": str(label_path.resolve()),
                        "valid_points": valid_points,
                        "image_sha256": sha256(image_path),
                        "point_cloud_sha256": sha256(cloud_path),
                        "depth_definition": "camera_forward_Z_m",
                    }
                )
            except Exception as exc:
                failures.append({"sequence": sequence.name, "frame": frame_id, "reason": str(exc)})

    write_jsonl(args.manifest, rows)
    report = {
        "data_root": str(args.data_root.resolve()),
        "frames_prepared": len(rows),
        "frames_failed": len(failures),
        "split_counts": {name: sum(row["split"] == name for row in rows) for name in sorted(allowed)},
        "failures": failures,
    }
    report_path = args.manifest.with_suffix(".report.json")
    report_path.write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding="utf-8")
    print(json.dumps(report, ensure_ascii=False, indent=2))
    if not rows:
        raise SystemExit("No paired frames were prepared")


if __name__ == "__main__":
    main()


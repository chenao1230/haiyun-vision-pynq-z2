"""Compare monocular box depth with paired LiDAR on the three reference frames."""
import json
from pathlib import Path

import numpy as np

from monocular_depth_range import MonocularDepthRange
from ship_range import ShipRange, _select_surface, _sha


ROOT = Path(__file__).resolve().parent


def main():
    references = json.loads((ROOT / "data/reference_boxes.json").read_text(encoding="utf-8"))
    lidar = ShipRange(ROOT / "data")
    monocular = MonocularDepthRange()
    rows = []
    all_point_errors = []
    all_point_targets = []
    for reference in references:
        image = ROOT / "data" / reference["image_path"]
        identity = _sha(image)
        frame = lidar.frames[identity]
        with np.load(ROOT / "data" / frame["points_path"], allow_pickle=False) as cloud:
            xyz = cloud["xyz_camera_m"].copy()
            uv = cloud["uv"].copy()
        ow, oh = frame["image_size_wh"]
        mw, mh = frame["point_image_size_wh"]
        for box_index, item in enumerate(reference["boxes"]):
            box = np.asarray(item["xyxy"], dtype=np.float64)
            model_box = box * np.array([mw / ow, mh / oh, mw / ow, mh / oh])
            chosen, reason = _select_surface(xyz, uv, model_box)
            if reason:
                raise RuntimeError("LiDAR reference selection failed: " + reason)
            lidar_z = float(np.median(xyz[chosen, 2]))
            lidar_radial = float(np.median(np.linalg.norm(xyz[chosen], axis=1)))
            mono = monocular.measure(image, [item], box_source="comparison")[0]
            if not mono["valid"]:
                raise RuntimeError("Monocular comparison failed: " + str(mono))
            mono_z = float(mono["distance_m"])
            predicted_depth, predicted_size = monocular._predict(image)
            pw, ph = predicted_size
            selected_uv = uv[chosen].astype(np.float64)
            selected_uv[:, 0] *= pw / mw
            selected_uv[:, 1] *= ph / mh
            px = np.clip(np.rint(selected_uv[:, 0]).astype(int), 0, pw - 1)
            py = np.clip(np.rint(selected_uv[:, 1]).astype(int), 0, ph - 1)
            point_prediction = predicted_depth[py, px].astype(np.float64)
            point_target = xyz[chosen, 2].astype(np.float64)
            valid = np.isfinite(point_prediction) & np.isfinite(point_target) & (point_target >= 1.0) & (point_target <= 80.0)
            point_prediction, point_target = point_prediction[valid], point_target[valid]
            point_error = point_prediction - point_target
            all_point_errors.extend(point_error.tolist())
            all_point_targets.extend(point_target.tolist())
            rows.append(
                {
                    "board_frame_id": reference["board_frame_id"],
                    "image": image.name,
                    "box_index": box_index,
                    "lidar_forward_z_m": lidar_z,
                    "lidar_radial_m": lidar_radial,
                    "monocular_forward_z_m": mono_z,
                    "absolute_error_z_m": abs(mono_z - lidar_z),
                    "absolute_relative_error_z": abs(mono_z - lidar_z) / lidar_z,
                    "monocular_confidence": mono["quality_fields"]["confidence"],
                    "lidar_points": int(len(chosen)),
                    "projected_point_count": int(point_target.size),
                    "projected_point_prediction_median_m": float(np.median(point_prediction)),
                    "projected_point_mae_m": float(np.mean(np.abs(point_error))),
                    "projected_point_rmse_m": float(np.sqrt(np.mean(point_error ** 2))),
                    "projected_point_abs_relative_error": float(np.mean(np.abs(point_error) / point_target)),
                }
            )
    errors = np.asarray([row["absolute_error_z_m"] for row in rows])
    relative = np.asarray([row["absolute_relative_error_z"] for row in rows])
    point_errors = np.asarray(all_point_errors, dtype=np.float64)
    point_targets = np.asarray(all_point_targets, dtype=np.float64)
    report = {
        "comparison_definition": "monocular inner-box median forward Z vs selected LiDAR ship-surface median forward Z",
        "sample_count": len(rows),
        "mae_z_m": float(errors.mean()),
        "rmse_z_m": float(np.sqrt(np.mean(errors ** 2))),
        "mean_abs_relative_error_z": float(relative.mean()),
        "projected_lidar_point_metrics": {
            "count": int(point_errors.size),
            "mae_m": float(np.mean(np.abs(point_errors))),
            "rmse_m": float(np.sqrt(np.mean(point_errors ** 2))),
            "abs_relative_error": float(np.mean(np.abs(point_errors) / point_targets)),
        },
        "rows": rows,
        "warning": "Only three reference frames; descriptive check, not a statistically valid accuracy claim.",
    }
    output = ROOT / "monocular_vs_lidar_3frames.json"
    output.write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding="utf-8")
    print(json.dumps(report, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()

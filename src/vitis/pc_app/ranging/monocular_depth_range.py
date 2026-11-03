"""Lazy monocular metric-depth backend for ship boxes.

The model predicts camera-forward Z depth.  Results are estimates, not observed
LiDAR ranges, and every result carries an explicit source/definition field.
"""
from collections import OrderedDict
import os
from pathlib import Path
import sys

import numpy as np


DEFAULT_MODEL_ROOT = Path(
    os.environ.get(
        "SHIP_DEPTH_MODEL_ROOT",
        str(Path(__file__).resolve().parents[3] / 'depth_anything_v2/metric_depth'),
    )
)
DEFAULT_CHECKPOINT = Path(
    os.environ.get(
        "SHIP_DEPTH_CHECKPOINT",
        str(Path(__file__).resolve().parents[4] / 'data/models/depth_best.pth'),
    )
)


class MonocularDepthRange:
    """Run Depth Anything V2 once per image and summarize depth inside boxes."""

    def __init__(self, model_root=None, checkpoint=None, input_size=518, max_depth=80.0, cache_size=3):
        self.model_root = Path(model_root) if model_root else DEFAULT_MODEL_ROOT
        self.checkpoint = Path(checkpoint) if checkpoint else DEFAULT_CHECKPOINT
        self.input_size = int(input_size)
        self.max_depth = float(max_depth)
        self.cache_size = max(1, int(cache_size))
        self._model = None
        self._device = None
        self._cv2 = None
        self._torch = None
        self._cache = OrderedDict()

    @property
    def loaded(self):
        return self._model is not None

    def _load(self):
        if self._model is not None:
            return
        if not self.model_root.is_dir():
            raise FileNotFoundError("Depth model code not found: " + str(self.model_root))
        if not self.checkpoint.is_file():
            raise FileNotFoundError("Depth checkpoint not found: " + str(self.checkpoint))
        import cv2
        import torch

        root = str(self.model_root.resolve())
        if root not in sys.path:
            sys.path.insert(0, root)
        from depth_anything_v2.dpt import DepthAnythingV2

        model = DepthAnythingV2(
            encoder="vits", features=64, out_channels=[48, 96, 192, 384], max_depth=self.max_depth
        )
        state = torch.load(self.checkpoint, map_location="cpu", weights_only=True)
        if isinstance(state, dict) and "model" in state:
            state = state["model"]
        state = {key.removeprefix("module."): value for key, value in state.items()}
        incompatible = model.load_state_dict(state, strict=False)
        if incompatible.missing_keys or incompatible.unexpected_keys:
            raise RuntimeError(
                "Depth checkpoint mismatch: missing=%s unexpected=%s"
                % (incompatible.missing_keys, incompatible.unexpected_keys)
            )
        requested = os.environ.get("SHIP_DEPTH_DEVICE", "auto").lower()
        if requested == "auto":
            requested = "cuda" if torch.cuda.is_available() else "cpu"
        if requested == "cuda" and not torch.cuda.is_available():
            raise RuntimeError("SHIP_DEPTH_DEVICE=cuda but CUDA is unavailable")
        self._device = torch.device(requested)
        self._model = model.to(self._device).eval()
        self._cv2 = cv2
        self._torch = torch

    @staticmethod
    def _cache_key(path):
        stat = path.stat()
        return str(path.resolve()), stat.st_size, stat.st_mtime_ns

    def _predict(self, image_path):
        image_path = Path(image_path)
        key = self._cache_key(image_path)
        if key in self._cache:
            depth, image_size = self._cache.pop(key)
            self._cache[key] = (depth, image_size)
            return depth, image_size
        self._load()
        image = self._cv2.imread(str(image_path), self._cv2.IMREAD_COLOR)
        if image is None:
            raise ValueError("Image cannot be decoded: " + str(image_path))
        with self._torch.inference_mode():
            tensor, (height, width) = self._model.image2tensor(image, self.input_size)
            tensor = tensor.to(self._device)
            prediction = self._model(tensor)
            prediction = self._torch.nn.functional.interpolate(
                prediction[:, None], (height, width), mode="bilinear", align_corners=True
            )[0, 0]
            depth = prediction.cpu().numpy().astype(np.float32)
        image_size = (image.shape[1], image.shape[0])
        self._cache[key] = (depth, image_size)
        while len(self._cache) > self.cache_size:
            self._cache.popitem(last=False)
        return depth, image_size

    def measure(self, image_path, boxes, box_size=None, box_source="external", **_identity):
        if not boxes:
            return []
        try:
            depth, image_size = self._predict(image_path)
        except Exception as exc:
            return [self._invalid(item, "monocular_inference_error", box_source, str(exc)) for item in boxes]
        ow, oh = image_size
        bw, bh = image_size if box_size is None else box_size
        if not np.isfinite([bw, bh]).all() or bw <= 0 or bh <= 0:
            return [self._invalid(item, "invalid_box", box_source) for item in boxes]
        sx, sy = ow / float(bw), oh / float(bh)
        output = []
        for item in boxes:
            try:
                box = np.asarray(item["xyxy"], dtype=np.float64)
                if box.shape != (4,) or not np.isfinite(box).all():
                    raise ValueError("Invalid box")
                if not (0 <= box[0] < box[2] <= bw and 0 <= box[1] < box[3] <= bh):
                    raise ValueError("Out-of-image box")
            except (ValueError, KeyError, TypeError):
                output.append(self._invalid(item, "invalid_box", box_source))
                continue
            x1, y1, x2, y2 = box * np.array([sx, sy, sx, sy])
            width, height = x2 - x1, y2 - y1
            # Avoid box borders, sky above the hull and water immediately below it.
            roi = [x1 + 0.15 * width, y1 + 0.30 * height, x2 - 0.15 * width, y2 - 0.08 * height]
            ix1, iy1 = max(0, int(np.floor(roi[0]))), max(0, int(np.floor(roi[1])))
            ix2, iy2 = min(ow, int(np.ceil(roi[2]))), min(oh, int(np.ceil(roi[3])))
            if ix2 - ix1 < 3 or iy2 - iy1 < 3:
                output.append(self._invalid(item, "monocular_box_too_small", box_source))
                continue
            values = depth[iy1:iy2:2, ix1:ix2:2].reshape(-1)
            values = values[np.isfinite(values) & (values >= 1.0) & (values <= self.max_depth)]
            if values.size < 20:
                output.append(self._invalid(item, "monocular_too_few_valid_pixels", box_source))
                continue
            p10, median, p90 = np.percentile(values, [10, 50, 90]).astype(float)
            relative_spread = (p90 - p10) / max(median, 1e-6)
            confidence = float(np.clip(1.0 - relative_spread / 1.5, 0.0, 1.0))
            output.append(
                {
                    "track_id": item.get("track_id"),
                    "object_id": item.get("object_id"),
                    "distance_m": median,
                    "distance_value": median,
                    "units": "m",
                    "valid": True,
                    "reason": None,
                    "valid_points": int(values.size),
                    "label": "~{:.1f} m".format(median),
                    "distance_source": "monocular_depth_anything_v2_metric_finetuned",
                    "range_backend": "monocular",
                    "box_source": box_source,
                    "distance_definition": "median_camera_forward_Z_in_inner_detection_box",
                    "quality_fields": {
                        "depth_p10_m": p10,
                        "depth_p90_m": p90,
                        "relative_spread": float(relative_spread),
                        "confidence": confidence,
                    },
                    "estimated_not_observed": True,
                    "independent_target_distance_accuracy_verified": False,
                }
            )
        return output

    def save_depth_preview(self, image_path, output_path):
        """Save a fixed-scale metric-depth heat map without running inference twice."""
        depth, _ = self._predict(image_path)
        normalized = np.clip((depth - 1.0) / max(self.max_depth - 1.0, 1e-6), 0.0, 1.0)
        gray = np.round(normalized * 255.0).astype(np.uint8)
        color = self._cv2.applyColorMap(gray, self._cv2.COLORMAP_TURBO)
        self._cv2.rectangle(color, (0, 0), (min(color.shape[1] - 1, 720), 38), (20, 33, 48), -1)
        self._cv2.putText(color, "Monocular metric depth: near 1m -> far 80m", (10, 27),
                          self._cv2.FONT_HERSHEY_SIMPLEX, 0.72, (255, 255, 255), 2, self._cv2.LINE_AA)
        output_path = Path(output_path);output_path.parent.mkdir(parents=True, exist_ok=True)
        if not self._cv2.imwrite(str(output_path), color):
            raise OSError("Depth preview cannot be saved: " + str(output_path))
        return output_path

    @staticmethod
    def _invalid(item, reason, source, detail=None):
        result = {
            "track_id": item.get("track_id"),
            "object_id": item.get("object_id"),
            "distance_m": None,
            "distance_value": None,
            "units": "m",
            "valid": False,
            "reason": reason,
            "valid_points": 0,
            "label": "--",
            "box_source": source,
            "range_backend": "monocular",
        }
        if detail:
            result["error_detail"] = detail
        return result

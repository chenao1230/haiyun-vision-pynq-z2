"""Select observed LiDAR or monocular depth without hiding identity errors."""
import os

from .monocular_depth_range import MonocularDepthRange
from .ship_range import ShipRange


MODE_LABELS = {"pointcloud": "点云测距", "monocular": "单目深度", "fusion": "融合测距"}
LABEL_MODES = {label: mode for mode, label in MODE_LABELS.items()}

# These failures mean no reliable LiDAR range exists for the current box.  Data
# identity/integrity failures are intentionally absent and never fall back.
FALLBACK_REASONS = {
    "no_paired_depth_for_this_image",
    "too_few_points",
    "mixed_or_insufficient_depth",
    "insufficient_spatial_support",
}


class RangeFusion:
    def __init__(self, pointcloud=None, monocular=None, mode=None):
        self.pointcloud = pointcloud or ShipRange()
        self.monocular = monocular or MonocularDepthRange()
        self.mode = self.normalize_mode(mode or os.environ.get("SHIP_RANGE_MODE", "fusion"))

    @staticmethod
    def normalize_mode(value):
        value = LABEL_MODES.get(value, value)
        if value not in MODE_LABELS:
            raise ValueError("Unknown range mode: " + str(value))
        return value

    def set_mode(self, value):
        self.mode = self.normalize_mode(value)
        return self.mode

    def measure(self, image_path, boxes, box_size=None, box_source="external", sequence_id=None, frame_id=None):
        common = dict(
            box_size=box_size,
            box_source=box_source,
            sequence_id=sequence_id,
            frame_id=frame_id,
        )
        if self.mode == "pointcloud":
            return self._tag(self.pointcloud.measure(image_path, boxes, **common), "pointcloud")
        if self.mode == "monocular":
            return self._tag(self.monocular.measure(image_path, boxes, **common), "monocular")

        observed = self._tag(self.pointcloud.measure(image_path, boxes, **common), "pointcloud")
        fallback_indexes = [
            index for index, result in enumerate(observed)
            if not result.get("valid") and result.get("reason") in FALLBACK_REASONS
        ]
        if not fallback_indexes:
            return observed
        fallback_boxes = [boxes[index] for index in fallback_indexes]
        estimated = self._tag(self.monocular.measure(image_path, fallback_boxes, **common), "monocular")
        for index, estimate in zip(fallback_indexes, estimated):
            original_reason = observed[index].get("reason")
            estimate["fusion_fallback_from"] = original_reason
            estimate["fusion_policy"] = "observed_lidar_first_then_monocular"
            observed[index] = estimate
        return observed

    @staticmethod
    def _tag(results, backend):
        for result in results:
            result.setdefault("range_backend", backend)
        return results

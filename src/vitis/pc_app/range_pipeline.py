"""Postprocess accepted frames; serial protocol and ACK remain unchanged."""
import copy
import json
import queue
import threading
import time
from pathlib import Path

from ranging.range_fusion import MODE_LABELS, RangeFusion


REASONS = {
    "no_paired_depth_for_this_image": "无配套点云",
    "sequence_mismatch": "点云组号不匹配",
    "frame_mismatch": "点云帧号不匹配",
    "invalid_box": "框坐标无效",
    "too_few_points": "测点不足",
    "mixed_or_insufficient_depth": "深度混杂或支持不足",
    "insufficient_spatial_support": "测点分布不足",
    "range_processing_error": "测距异常",
    "image_dimensions_mismatch": "原图尺寸不匹配",
    "monocular_inference_error": "单目模型不可用",
    "monocular_box_too_small": "船框过小，无法单目估距",
    "monocular_too_few_valid_pixels": "单目有效深度不足",
}

_MANIFEST = Path(__file__).resolve().parent / "ranging/data/manifest.json"
PAIRED_IMAGE_NAMES = {
    Path(frame["image_path"]).name
    for frame in json.loads(_MANIFEST.read_text(encoding="utf-8"))["frames"]
}


def objects(frame):
    return frame["tracks"] if frame["mode"] == "TRACK" else frame["detections"]


def range_for(frame, obj):
    for result in frame.get("range_results", []):
        if (
            result.get("track_id") == obj.get("track_id")
            and result.get("detection_index") == obj.get("detection_index")
        ):
            return result
    return None


def range_text(result):
    if result is None:
        return "测距待处理"
    if result.get("valid"):
        if result.get("range_backend") == "monocular":
            confidence = result.get("quality_fields", {}).get("confidence")
            suffix = "" if confidence is None else " · 可信度 %.0f%%" % (100 * confidence)
            return "单目估距 ~%.1f m%s" % (result["distance_m"], suffix)
        return "点云距离 %.1f m · %d 点" % (result["distance_m"], result.get("valid_points", 0))
    return REASONS.get(result.get("reason"), "距离不可用")


class RangeService:
    def __init__(self, mode=None, estimator=None):
        self.estimator = estimator or RangeFusion(mode=mode)
        self.image_names = {Path(frame["image_path"]).name for frame in self.estimator.pointcloud.frames.values()}
        self.lock = threading.Lock()

    @property
    def mode(self):
        return self.estimator.mode

    @property
    def mode_label(self):
        return MODE_LABELS[self.mode]

    def set_mode(self, mode):
        with self.lock:
            return self.estimator.set_mode(mode)

    def enrich(self, frame, image_dir):
        enriched = copy.deepcopy(frame)
        start = time.perf_counter()
        observations = objects(enriched)
        inputs = [
            {
                "xyxy": observation.get("display_box", observation["box"]),
                "track_id": observation.get("track_id"),
                "object_id": "detection_%d" % observation["detection_index"],
            }
            for observation in observations
        ]
        origin = enriched.get("execution_origin", "BOARD_SERIAL_CRC_VERIFIED")
        image = Path(image_dir) / enriched["source_image"]
        try:
            if not image.is_file():
                raise FileNotFoundError(str(image))
            with self.lock:
                results = self.estimator.measure(
                    image,
                    inputs,
                    box_source=origin,
                    sequence_id=enriched["sequence_id"],
                    frame_id=enriched["frame_id"],
                )
            status = "complete" if any(item.get("valid") for item in results) or not inputs else "unsupported"
        except Exception as exc:
            results = [self.estimator.pointcloud._invalid(item, "range_processing_error", origin) for item in inputs]
            status = "error"
            enriched["range_error"] = str(exc)
        for result, observation in zip(results, observations):
            result["detection_index"] = observation["detection_index"]
        enriched["range_results"] = results
        enriched["range_status"] = status
        enriched["range_mode"] = self.mode
        enriched["range_mode_label"] = self.mode_label
        enriched["range_timing_ms"] = (time.perf_counter() - start) * 1000
        enriched["range_definition"] = "source_specific; inspect each result.distance_definition"
        enriched["range_processing_origin"] = "PC_observed_LiDAR_or_monocular_postprocessing"
        enriched["range_input_origin"] = origin
        return enriched

    def save_depth_preview(self, image_path, output_path):
        with self.lock:
            return self.estimator.monocular.save_depth_preview(image_path, output_path)


class RangeWorker(threading.Thread):
    """Own processing thread; never delays SerialWorker ACK or accesses Tk."""

    def __init__(self, events, service):
        super().__init__(daemon=True)
        self.events = events
        self.service = service
        self.jobs = queue.Queue()

    def submit(self, generation, key, frame, images, save_path=None):
        self.jobs.put((generation, key, copy.deepcopy(frame), Path(images), save_path))

    def close(self):
        self.jobs.put(None)

    def run(self):
        while True:
            job = self.jobs.get()
            if job is None:
                return
            generation, key, frame, images, path = job
            try:
                result = self.service.enrich(frame, images)
                if path is not None:
                    try:
                        path = Path(path)
                        path.parent.mkdir(parents=True, exist_ok=True)
                        if result.get("range_mode") == "monocular":
                            preview = path.parent / "depth_maps" / ("%s_%04d.png" % (frame["sequence_id"], frame["frame_id"]))
                            try:
                                result["range_depth_preview_path"] = str(self.service.save_depth_preview(images / frame["source_image"], preview))
                            except Exception as exc:
                                result["range_depth_error"] = str(exc)
                                self.events.put(("warning", "深度图生成失败：" + str(exc)))
                        with path.open("a", encoding="utf-8") as output:
                            output.write(json.dumps(result, ensure_ascii=False) + "\n")
                    except OSError as exc:
                        self.events.put(("warning", "测距派生结果保存失败：" + str(exc)))
                self.events.put(("range_frame", (generation, key, result)))
            except Exception as exc:
                self.events.put(("range_failed", (generation, key, str(exc))))

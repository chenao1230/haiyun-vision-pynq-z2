"""End-to-end smoke test for the exact service used by the desktop UI."""
import json
from pathlib import Path

from range_pipeline import RangeService


ROOT = Path(__file__).resolve().parent


def make_frame(sequence_id, frame_id, source_image, width, height, box, track_id=1):
    detection = {
        "detection_index": 0,
        "class_id": 5,
        "score": 0.9,
        "box": box,
        "display_box": box,
        "track_id": track_id,
    }
    return {
        "run_id": "PIPELINE_SMOKE_TEST",
        "sequence_id": sequence_id,
        "frame_id": frame_id,
        "source_image": source_image,
        "width": width,
        "height": height,
        "mode": "TRACK",
        "detections": [detection],
        "tracks": [detection],
        "execution_origin": "PC_PIPELINE_SMOKE_TEST",
    }


def main():
    service = RangeService(mode="fusion")

    references = json.loads((ROOT / "ranging/data/reference_boxes.json").read_text(encoding="utf-8"))
    first = references[0]
    paired = make_frame(
        "POHANG00_RANGE",
        first["board_frame_id"],
        Path(first["image_path"]).name,
        2048,
        1080,
        first["boxes"][0]["xyxy"],
    )
    paired_result = service.enrich(paired, ROOT / "ranging/data/images")["range_results"][0]
    assert paired_result["valid"] and paired_result["range_backend"] == "pointcloud"

    image_name = "001577_20170819_091419.jpg"
    regular = make_frame(
        "G066",
        0,
        image_name,
        1920,
        1080,
        [1422.250854, 170.152328, 1906.989502, 445.645477],
    )
    regular_result = service.enrich(regular, ROOT.parent / "data/images")["range_results"][0]
    assert regular_result["valid"] and regular_result["range_backend"] == "monocular"
    assert regular_result["fusion_fallback_from"] == "no_paired_depth_for_this_image"

    print("PASS pointcloud %.3f m" % paired_result["distance_m"])
    print("PASS monocular ~%.3f m" % regular_result["distance_m"])
    print("PASS: desktop range service end-to-end")


if __name__ == "__main__":
    main()

"""Dependency-free contract tests for backend selection and fallback policy."""
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from ranging.range_fusion import RangeFusion


class FakeBackend:
    def __init__(self, results):
        self.results = results
        self.calls = 0

    def measure(self, _image, boxes, **_kwargs):
        self.calls += 1
        return [dict(self.results[index if index < len(self.results) else -1]) for index, _ in enumerate(boxes)]


def result(valid, reason=None, distance=None):
    return {"valid": valid, "reason": reason, "distance_m": distance, "valid_points": int(valid)}


def main():
    boxes = [{"xyxy": [0, 0, 10, 10]}, {"xyxy": [10, 10, 20, 20]}]

    lidar = FakeBackend([result(True, distance=12.0), result(False, "too_few_points")])
    mono = FakeBackend([result(True, distance=13.0)])
    fused = RangeFusion(lidar, mono, "fusion").measure("unused", boxes)
    assert fused[0]["distance_m"] == 12.0 and fused[0]["range_backend"] == "pointcloud"
    assert fused[1]["distance_m"] == 13.0 and fused[1]["range_backend"] == "monocular"
    assert fused[1]["fusion_fallback_from"] == "too_few_points"
    assert lidar.calls == 1 and mono.calls == 1

    lidar = FakeBackend([result(False, "sequence_mismatch")])
    mono = FakeBackend([result(True, distance=1.0)])
    fused = RangeFusion(lidar, mono, "fusion").measure("unused", boxes[:1])
    assert fused[0]["reason"] == "sequence_mismatch" and mono.calls == 0

    lidar = FakeBackend([result(True, distance=8.0)])
    mono = FakeBackend([result(True, distance=9.0)])
    answer = RangeFusion(lidar, mono, "monocular").measure("unused", boxes[:1])
    assert answer[0]["distance_m"] == 9.0 and lidar.calls == 0
    print("PASS: range fusion backend and integrity policy")


if __name__ == "__main__":
    main()

from __future__ import annotations

import json
import sys
from pathlib import Path
from typing import Dict, Iterable, List, Tuple

import cv2
import numpy as np
import torch
from torch.utils.data import Dataset


IMAGENET_MEAN = np.asarray([0.485, 0.456, 0.406], dtype=np.float32)
IMAGENET_STD = np.asarray([0.229, 0.224, 0.225], dtype=np.float32)


def read_jsonl(path: Path) -> List[dict]:
    rows: List[dict] = []
    with path.open("r", encoding="utf-8") as handle:
        for line_number, line in enumerate(handle, 1):
            if not line.strip():
                continue
            try:
                rows.append(json.loads(line))
            except json.JSONDecodeError as exc:
                raise ValueError(f"Invalid JSONL at {path}:{line_number}") from exc
    return rows


def write_jsonl(path: Path, rows: Iterable[dict]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8", newline="\n") as handle:
        for row in rows:
            handle.write(json.dumps(row, ensure_ascii=False, sort_keys=True) + "\n")


def parse_calibration(path: Path) -> Tuple[np.ndarray, np.ndarray]:
    values: Dict[str, np.ndarray] = {}
    for line in path.read_text(encoding="utf-8").splitlines():
        if ":" not in line:
            continue
        key, raw = line.split(":", 1)
        try:
            values[key.strip()] = np.asarray([float(x) for x in raw.split()], dtype=np.float64)
        except ValueError:
            continue
    if "P2" not in values or "Tr_velo_to_cam" not in values:
        raise ValueError(f"Missing P2 or Tr_velo_to_cam in {path}")
    p2 = values["P2"]
    if p2.size == 9:
        k = p2.reshape(3, 3)
    elif p2.size == 12:
        k = p2.reshape(3, 4)[:, :3]
    else:
        raise ValueError(f"Unexpected P2 length {p2.size} in {path}")
    tr = values["Tr_velo_to_cam"]
    if tr.size != 12:
        raise ValueError(f"Unexpected Tr_velo_to_cam length {tr.size} in {path}")
    return k.astype(np.float32), tr.reshape(3, 4).astype(np.float32)


def read_pcd_xyz(path: Path) -> np.ndarray:
    header: Dict[str, List[str]] = {}
    with path.open("rb") as handle:
        while True:
            raw = handle.readline()
            if not raw:
                raise ValueError(f"PCD header ended before DATA in {path}")
            line = raw.decode("ascii", errors="strict").strip()
            if not line or line.startswith("#"):
                continue
            key, *items = line.split()
            header[key.upper()] = items
            if key.upper() == "DATA":
                break
        fields = header.get("FIELDS", [])
        if not all(name in fields for name in ("x", "y", "z")):
            raise ValueError(f"PCD has no x/y/z fields: {path}")
        xyz_columns = [fields.index(name) for name in ("x", "y", "z")]
        data_kind = header["DATA"][0].lower()
        if data_kind == "ascii":
            points = np.loadtxt(handle, dtype=np.float32, usecols=xyz_columns, ndmin=2)
        elif data_kind == "binary":
            sizes = [int(value) for value in header["SIZE"]]
            types = header["TYPE"]
            counts = [int(value) for value in header.get("COUNT", ["1"] * len(fields))]
            type_map = {
                ("F", 4): "<f4", ("F", 8): "<f8",
                ("I", 1): "<i1", ("I", 2): "<i2", ("I", 4): "<i4",
                ("U", 1): "<u1", ("U", 2): "<u2", ("U", 4): "<u4",
            }
            dtype_fields = []
            for name, kind, size, count in zip(fields, types, sizes, counts):
                dtype = type_map.get((kind.upper(), size))
                if dtype is None:
                    raise ValueError(f"Unsupported PCD field type {(kind, size)} in {path}")
                dtype_fields.append((name, dtype) if count == 1 else (name, dtype, (count,)))
            count = int(header.get("POINTS", header.get("WIDTH", ["0"]))[0])
            records = np.frombuffer(handle.read(), dtype=np.dtype(dtype_fields), count=count)
            points = np.column_stack([records[name] for name in ("x", "y", "z")]).astype(np.float32)
        else:
            raise ValueError(
                f"Unsupported PCD DATA {data_kind!r} in {path}; binary_compressed requires conversion first"
            )
    if points.ndim != 2 or points.shape[1] != 3 or points.shape[0] == 0:
        raise ValueError(f"No XYZ points read from {path}")
    return points


def project_sparse_z(
    xyz_lidar: np.ndarray,
    k: np.ndarray,
    tr_camera_from_lidar: np.ndarray,
    image_hw: Tuple[int, int],
    min_z: float,
    max_z: float,
) -> Tuple[np.ndarray, np.ndarray, np.ndarray]:
    height, width = image_hw
    xyz1 = np.concatenate(
        [xyz_lidar.astype(np.float32), np.ones((xyz_lidar.shape[0], 1), dtype=np.float32)], axis=1
    )
    xyz_camera = (tr_camera_from_lidar @ xyz1.T).T
    z = xyz_camera[:, 2]
    valid = np.isfinite(xyz_camera).all(axis=1) & (z >= min_z) & (z <= max_z)
    xyz_camera = xyz_camera[valid]
    z = z[valid]
    projected = (k @ xyz_camera.T).T
    uv = projected[:, :2] / projected[:, 2:3]
    pixels = np.rint(uv).astype(np.int64)
    inside = (
        (pixels[:, 0] >= 0)
        & (pixels[:, 0] < width)
        & (pixels[:, 1] >= 0)
        & (pixels[:, 1] < height)
        & np.isfinite(uv).all(axis=1)
    )
    pixels, z, xyz_camera = pixels[inside], z[inside], xyz_camera[inside]

    flat = pixels[:, 1] * width + pixels[:, 0]
    order = np.lexsort((z, flat))
    flat_sorted = flat[order]
    first = np.ones(flat_sorted.shape[0], dtype=bool)
    first[1:] = flat_sorted[1:] != flat_sorted[:-1]
    chosen = order[first]

    depth = np.zeros((height, width), dtype=np.float32)
    mask = np.zeros((height, width), dtype=np.uint8)
    chosen_pixels = pixels[chosen]
    depth[chosen_pixels[:, 1], chosen_pixels[:, 0]] = z[chosen]
    mask[chosen_pixels[:, 1], chosen_pixels[:, 0]] = 1
    return depth, mask, xyz_camera[chosen]


def render_overlay(image_bgr: np.ndarray, depth: np.ndarray, mask: np.ndarray) -> np.ndarray:
    overlay = image_bgr.copy()
    values = depth[mask.astype(bool)]
    if values.size == 0:
        return overlay
    lo, hi = np.percentile(values, [2, 98])
    scale = np.clip((depth - lo) / max(float(hi - lo), 1e-6), 0.0, 1.0)
    colors = cv2.applyColorMap((255 * (1.0 - scale)).astype(np.uint8), cv2.COLORMAP_TURBO)
    ys, xs = np.nonzero(mask)
    for x, y in zip(xs.tolist(), ys.tolist()):
        cv2.circle(overlay, (x, y), 1, colors[y, x].tolist(), -1, lineType=cv2.LINE_AA)
    return cv2.addWeighted(image_bgr, 0.7, overlay, 0.3, 0.0)


class SparseMetricDataset(Dataset):
    def __init__(self, manifest: Path, split: str, image_size: int = 518, augment: bool = False):
        self.rows = [row for row in read_jsonl(manifest) if row.get("split") == split]
        if not self.rows:
            raise ValueError(f"No rows for split={split!r} in {manifest}")
        self.image_size = image_size
        self.augment = augment

    def __len__(self) -> int:
        return len(self.rows)

    def __getitem__(self, index: int) -> dict:
        row = self.rows[index]
        image = cv2.imread(row["image"], cv2.IMREAD_COLOR)
        if image is None:
            raise FileNotFoundError(row["image"])
        label = np.load(row["label"])
        depth = label["depth_z_m"].astype(np.float32)
        mask = label["valid_mask"].astype(np.uint8)
        height, width = image.shape[:2]
        scale = self.image_size / min(height, width)
        resized_h = max(14, int(round(height * scale / 14.0)) * 14)
        resized_w = max(14, int(round(width * scale / 14.0)) * 14)
        size = (resized_w, resized_h)
        image = cv2.resize(image, size, interpolation=cv2.INTER_CUBIC)
        depth = cv2.resize(depth, size, interpolation=cv2.INTER_NEAREST)
        mask = cv2.resize(mask, size, interpolation=cv2.INTER_NEAREST)
        if self.augment and torch.rand(()) < 0.5:
            image = image[:, ::-1].copy()
            depth = depth[:, ::-1].copy()
            mask = mask[:, ::-1].copy()
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB).astype(np.float32) / 255.0
        image = (image - IMAGENET_MEAN) / IMAGENET_STD
        image = torch.from_numpy(image.transpose(2, 0, 1).copy())
        return {
            "image": image,
            "depth": torch.from_numpy(depth),
            "mask": torch.from_numpy(mask.astype(bool)),
            "frame_id": row["frame_id"],
            "sequence_id": row["sequence_id"],
        }


def add_model_root(model_root: Path) -> None:
    resolved = str(model_root.resolve())
    if resolved not in sys.path:
        sys.path.insert(0, resolved)


def build_model(model_root: Path, max_depth: float, checkpoint: Path):
    add_model_root(model_root)
    from depth_anything_v2.dpt import DepthAnythingV2

    config = {"encoder": "vits", "features": 64, "out_channels": [48, 96, 192, 384]}
    model = DepthAnythingV2(**config, max_depth=max_depth)
    state = torch.load(checkpoint, map_location="cpu", weights_only=True)
    if isinstance(state, dict) and "model" in state:
        state = state["model"]
    state = {key.removeprefix("module."): value for key, value in state.items()}
    incompatible = model.load_state_dict(state, strict=False)
    if incompatible.missing_keys or incompatible.unexpected_keys:
        raise RuntimeError(
            f"Checkpoint mismatch. missing={incompatible.missing_keys}, unexpected={incompatible.unexpected_keys}"
        )
    return model


def metric_sums(pred: torch.Tensor, target: torch.Tensor, mask: torch.Tensor) -> dict:
    pred = pred[mask].clamp_min(1e-3)
    target = target[mask].clamp_min(1e-3)
    if pred.numel() == 0:
        return {"count": 0}
    error = pred - target
    ratio = torch.maximum(pred / target, target / pred)
    return {
        "count": int(pred.numel()),
        "abs_sum": float(error.abs().sum().item()),
        "sq_sum": float(error.square().sum().item()),
        "abs_rel_sum": float((error.abs() / target).sum().item()),
        "delta1_sum": float((ratio < 1.25).sum().item()),
    }


def reduce_metrics(parts: Iterable[dict]) -> dict:
    totals = {"count": 0, "abs_sum": 0.0, "sq_sum": 0.0, "abs_rel_sum": 0.0, "delta1_sum": 0.0}
    for part in parts:
        for key in totals:
            totals[key] += part.get(key, 0)
    count = totals["count"]
    if count == 0:
        return {"count": 0}
    return {
        "count": count,
        "mae_m": totals["abs_sum"] / count,
        "rmse_m": (totals["sq_sum"] / count) ** 0.5,
        "abs_rel": totals["abs_rel_sum"] / count,
        "delta1": totals["delta1_sum"] / count,
    }


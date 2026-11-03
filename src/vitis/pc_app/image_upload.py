"""Prepare arbitrary RGB images exactly like the existing SD-card float tensors."""
from pathlib import Path
import zlib

INPUT_SIZE = (416, 416)
INPUT_BYTES = 3 * 416 * 416


def prepare_image(path):
    from PIL import Image

    path = Path(path)
    with Image.open(path) as source:
        return prepare_pil_image(source, path)


def prepare_pil_image(source, path=None):
    import numpy as np
    from PIL import Image

    image = source.convert("RGB")
    width, height = image.size
    resized = image.resize(INPUT_SIZE, Image.Resampling.BICUBIC)
    tensor = np.asarray(resized, dtype=np.uint8).transpose(2, 0, 1)
    payload = np.ascontiguousarray(tensor, dtype=np.uint8).tobytes()
    if len(payload) != INPUT_BYTES:
        raise ValueError(f"预处理输出大小异常：{len(payload)}")
    return {
        "path": Path(path) if path is not None else None,
        "width": width,
        "height": height,
        "payload": payload,
        "crc32": f"{zlib.crc32(payload) & 0xffffffff:08X}",
    }

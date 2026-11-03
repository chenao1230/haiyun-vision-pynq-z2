"""Decode the two six-class FPGA outputs and save a picture with boxes."""
from pathlib import Path
import argparse
import sys

YOLO_DIR = Path(__file__).resolve().parent / 'yolo_utils'
sys.path.insert(0, str(YOLO_DIR))
import numpy as np
import torch
from PIL import Image, ImageDraw
from utils.utils import get_anchors, get_classes
from utils.utils_bbox import DecodeBox


def decode(outputs, image_size):
    classes, count = get_classes(str(YOLO_DIR / 'model_data/voc_classes.txt'))
    if count != 6:
        raise ValueError('This BOOT.bin requires the six ship classes')
    anchors, _ = get_anchors(str(YOLO_DIR / 'model_data/yolo_anchors.txt'))
    decoder = DecodeBox(anchors, count, (416, 416), [[3, 4, 5], [0, 1, 2]])
    with torch.no_grad():
        boxes = torch.cat(decoder.decode_box(outputs), 1)
        result = decoder.non_max_suppression(boxes, count, [416, 416], [image_size[1], image_size[0]], False, conf_thres=0.5, nms_thres=0.3)[0]
    return classes, result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('directory', type=Path, help='Directory containing img.png, out0.bin, out1.bin')
    parser.add_argument('--output', type=Path, default=Path(__file__).parent / 'board_result.jpg')
    args = parser.parse_args()
    image = Image.open(args.directory / 'img.png').convert('RGB')
    outputs = []
    for index, side in enumerate((13, 26)):
        path = args.directory / f'out{index}.bin'
        values = np.fromfile(path, dtype='<f4')
        if values.size != 33 * side * side or not np.isfinite(values).all():
            raise ValueError(f'Invalid board output: {path}')
        outputs.append(torch.from_numpy(values).reshape(1, 33, side, side))
    classes, boxes = decode(outputs, image.size)
    draw = ImageDraw.Draw(image)
    for top, left, bottom, right, obj, conf, cls in ([] if boxes is None else boxes):
        xy = (max(0, int(left)), max(0, int(top)), min(image.width - 1, int(right)), min(image.height - 1, int(bottom)))
        if xy[2] <= xy[0] or xy[3] <= xy[1]:
            continue
        label = f'{classes[int(cls)]} {obj * conf:.2f}'
        draw.rectangle(xy, outline='red', width=3)
        draw.text(xy[:2], label, fill='red')
        print(label, xy)
    image.save(args.output)
    print(f'Saved: {args.output}')


if __name__ == '__main__':
    main()

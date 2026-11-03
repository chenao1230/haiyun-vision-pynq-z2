import unittest
from pathlib import Path
import numpy as np

from image_upload import prepare_image, prepare_pil_image, INPUT_BYTES


class ImageUploadTest(unittest.TestCase):
    def test_matches_existing_sd_tensor_exactly(self):
        root = Path(__file__).resolve().parents[1]
        image = root / "data" / "images" / "D01_Daylight.jpg"
        reference = Path(__file__).resolve().parents[3] / "board/sd_card/sequences/DETECT06/000000.bin"
        if not image.is_file() or not reference.is_file():
            self.skipTest("本机没有91帧回归样本")
        prepared = prepare_image(image)
        self.assertEqual(len(prepared["payload"]), INPUT_BYTES)
        pixels = np.frombuffer(prepared["payload"], dtype=np.uint8).astype(np.int32)
        actual = ((pixels * 512 + 127) // 255).astype(np.int16)
        expected = np.fromfile(reference, dtype="<f4")
        expected = np.rint(expected * 512).astype(np.int16)
        self.assertTrue(np.array_equal(actual, expected))

    def test_camera_pil_path_matches_file_path(self):
        from PIL import Image
        root = Path(__file__).resolve().parents[1]
        image = root / "data" / "images" / "D01_Daylight.jpg"
        if not image.is_file():self.skipTest("本机没有摄像头预处理回归样本")
        by_file = prepare_image(image)
        with Image.open(image) as source:by_camera = prepare_pil_image(source)
        self.assertEqual(by_camera["payload"], by_file["payload"])
        self.assertEqual(by_camera["crc32"], by_file["crc32"])
        self.assertEqual((by_camera["width"],by_camera["height"]),(by_file["width"],by_file["height"]))


if __name__ == "__main__":
    unittest.main()

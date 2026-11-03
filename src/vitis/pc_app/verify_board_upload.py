"""One-shot physical-board verification for the R4 Ethernet upload path."""
import queue
import secrets
import time
from pathlib import Path

from image_upload import prepare_image
from transport import TcpWorker


def main():
    root = Path(__file__).resolve().parents[1]
    image = root / "data" / "images" / "D01_Daylight.jpg"
    prepared = prepare_image(image)
    run_id = "T" + f"{int(time.time()):08X}" + secrets.token_hex(1).upper()
    events = queue.Queue()
    worker = TcpWorker("192.168.1.10", 5000, events, root / "runs")
    worker.start()
    started = time.monotonic()
    frame = None
    done = None
    try:
        while time.monotonic() - started < 60:
            kind, value = events.get(timeout=60)
            print(kind, value if kind != "frame" else {"detections": len(value["detections"]), "timing_us": value["timing_us"]})
            if kind == "connected":
                worker.upload(run_id, prepared["payload"], prepared["width"], prepared["height"], prepared["crc32"])
            elif kind == "frame":
                frame = value
            elif kind == "message" and value[0] == "DONE":
                done = value
                break
            elif kind == "error":
                raise RuntimeError(value)
        if frame is None or done is None or done[2] != "SUCCESS":
            raise RuntimeError("board upload did not complete successfully")
        print("VERIFY_PASS", run_id, len(frame["detections"]), frame["timing_us"])
    finally:
        worker.close();worker.join(2)


if __name__ == "__main__":
    main()

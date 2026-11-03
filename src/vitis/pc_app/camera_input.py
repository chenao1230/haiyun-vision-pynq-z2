"""Background OpenCV capture for a Windows USB/phone webcam."""
import threading
import time


class CameraWorker(threading.Thread):
    def __init__(self, index, events, width=1280, height=720):
        super().__init__(daemon=True)
        self.index = int(index)
        self.events = events
        self.width = int(width)
        self.height = int(height)
        self.stopping = threading.Event()
        self.lock = threading.Lock()
        self.latest_rgb = None
        self.frames = 0
        self.capture = None

    def get_latest(self):
        with self.lock:
            return None if self.latest_rgb is None else self.latest_rgb.copy()

    def close(self):
        self.stopping.set()

    def run(self):
        try:
            import cv2
            # Report an opened device immediately.  A few Windows camera drivers
            # need several seconds before their first useful frame; requiring a
            # non-black frame here made the UI appear to be stuck opening.
            capture = cv2.VideoCapture(self.index, cv2.CAP_DSHOW)
            if not capture.isOpened():
                capture.release();capture = cv2.VideoCapture(self.index)
            if not capture.isOpened():
                raise RuntimeError("无法打开摄像头%d。请关闭Windows相机、微信视频等占用摄像头的程序，或更换设备编号。" % self.index)
            self.capture = capture
            capture.set(cv2.CAP_PROP_FRAME_WIDTH, self.width)
            capture.set(cv2.CAP_PROP_FRAME_HEIGHT, self.height)
            self.events.put(("camera_opened", (self.index, int(capture.get(cv2.CAP_PROP_FRAME_WIDTH)), int(capture.get(cv2.CAP_PROP_FRAME_HEIGHT)))))
            failures = 0
            while not self.stopping.is_set():
                ok, frame = capture.read()
                if not ok or frame is None:
                    failures += 1
                    if failures > 50:raise RuntimeError("摄像头连续读取失败，请重新连接手机。")
                    time.sleep(.02);continue
                failures = 0
                rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
                with self.lock:self.latest_rgb = rgb;self.frames += 1
        except Exception as exc:
            self.events.put(("camera_error", str(exc)))
        finally:
            if self.capture is not None:self.capture.release()
            self.events.put(("camera_closed", self.index))

import queue
import socket
import tempfile
import threading
import time
import unittest

from transport import TcpWorker


class TcpTransportTest(unittest.TestCase):
    def test_connect_hello_receive_and_command(self):
        listener = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        listener.bind(("127.0.0.1", 0))
        listener.listen(1)
        port = listener.getsockname()[1]
        received = []
        server_done = threading.Event()

        def serve():
            connection, _ = listener.accept()
            connection.settimeout(2)
            buffered=bytearray()
            def line():
                while b'\n' not in buffered:buffered.extend(connection.recv(128))
                value,_,rest=buffered.partition(b'\n');buffered[:]=rest;return bytes(value)+b'\n'
            received.append(line())
            connection.sendall(b"@SHIP1,STATUS,READY\n")
            received.append(line())
            connection.close()
            listener.close()
            server_done.set()

        threading.Thread(target=serve, daemon=True).start()
        events = queue.Queue()
        with tempfile.TemporaryDirectory() as runs:
            worker = TcpWorker("127.0.0.1", port, events, runs)
            worker.start()
            kind, value = events.get(timeout=2)
            self.assertEqual((kind, value), ("connected", f"127.0.0.1:{port}"))
            worker.command("STOP,TEST")
            messages = []
            deadline = time.monotonic() + 2
            while time.monotonic() < deadline:
                kind, value = events.get(timeout=2)
                if kind == "message":
                    messages.append(value)
                    break
            self.assertEqual(messages, [["STATUS", "READY"]])
            self.assertTrue(server_done.wait(2))
            worker.close()
            worker.join(2)

        self.assertEqual(received[0], b"HELLO\n")
        self.assertEqual(received[1], b"STOP,TEST\n")

    def test_upload_waits_for_ready_then_sends_binary(self):
        listener = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        listener.bind(("127.0.0.1", 0));listener.listen(1)
        port = listener.getsockname()[1];payload = bytes(3*416*416);received = bytearray();server_done = threading.Event()

        def serve():
            connection, _ = listener.accept();connection.settimeout(3)
            buffered=bytearray()
            def line():
                while b'\n' not in buffered:buffered.extend(connection.recv(256))
                value,_,rest=buffered.partition(b'\n');buffered[:]=rest;return bytes(value)+b'\n'
            self.assertEqual(line(), b"HELLO\n")
            header = line()
            self.assertTrue(header.startswith(b"UPLOAD,UTEST,DET,1920,1080,519168,"))
            connection.sendall(b"@SHIP1,UPLOAD_READY,UTEST,519168\n")
            while len(received) < len(payload):received.extend(connection.recv(min(65536,len(payload)-len(received))))
            connection.sendall(b"@SHIP1,UPLOAD_RECEIVED,UTEST,25000\n")
            time.sleep(.1);connection.close();listener.close();server_done.set()

        threading.Thread(target=serve,daemon=True).start();events=queue.Queue()
        with tempfile.TemporaryDirectory() as runs:
            worker=TcpWorker("127.0.0.1",port,events,runs);worker.start()
            self.assertEqual(events.get(timeout=2)[0],"connected")
            worker.upload("UTEST",payload,1920,1080,"00000000")
            self.assertTrue(server_done.wait(5));worker.close();worker.join(2)
        self.assertEqual(bytes(received),payload)

    def test_batch_upload_uses_one_run_and_numbered_frames(self):
        listener=socket.socket(socket.AF_INET,socket.SOCK_STREAM);listener.bind(("127.0.0.1",0));listener.listen(1)
        port=listener.getsockname()[1];payload=bytes([7])*(3*416*416);received=bytearray();headers=[];server_done=threading.Event()
        def serve():
            connection,_=listener.accept();connection.settimeout(3);buffered=bytearray()
            def line():
                while b'\n' not in buffered:buffered.extend(connection.recv(256))
                value,_,rest=buffered.partition(b'\n');buffered[:]=rest;return bytes(value)+b'\n'
            self.assertEqual(line(),b'HELLO\n');headers.append(line())
            connection.sendall(b'@SHIP1,BATCH_READY,BTEST,G066,2\n');headers.append(line())
            connection.sendall(b'@SHIP1,UPFRAME_READY,BTEST,519168\n')
            while len(received)<len(payload):received.extend(connection.recv(min(65536,len(payload)-len(received))))
            connection.sendall(b'@SHIP1,UPLOAD_RECEIVED,BTEST,12345\n');time.sleep(.1);connection.close();listener.close();server_done.set()
        threading.Thread(target=serve,daemon=True).start();events=queue.Queue()
        with tempfile.TemporaryDirectory() as runs:
            worker=TcpWorker('127.0.0.1',port,events,runs);worker.start();self.assertEqual(events.get(timeout=2)[0],'connected')
            worker.begin_batch('BTEST','TRACK','G066',2);time.sleep(.05);worker.upload_frame('BTEST',0,payload,1920,1080,'00000000')
            self.assertTrue(server_done.wait(5));worker.close();worker.join(2)
        self.assertEqual(headers[0],b'BATCH,BTEST,TRACK,G066,2\n')
        self.assertTrue(headers[1].startswith(b'UPFRAME,BTEST,0,1920,1080,519168,'));self.assertEqual(bytes(received),payload)


if __name__ == "__main__":
    unittest.main()

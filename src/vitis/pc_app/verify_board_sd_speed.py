"""Measure the existing SD input path on one short physical-board group."""
import queue
import secrets
import time
from pathlib import Path
from transport import TcpWorker


def main():
    root=Path(__file__).resolve().parents[1];events=queue.Queue();worker=TcpWorker("192.168.1.10",5000,events,root/"runs")
    run_id="S"+f"{int(time.time()):08X}"+secrets.token_hex(1).upper();worker.start();frames=[]
    try:
        deadline=time.monotonic()+30
        while time.monotonic()<deadline:
            kind,value=events.get(timeout=30)
            if kind=="connected":worker.command(f"RUN,{run_id},DET,DETECT06")
            elif kind=="frame":frames.append(value)
            elif kind=="message" and value[0]=="DONE":break
            elif kind=="error":raise RuntimeError(value)
        if len(frames)!=6:raise RuntimeError(f"expected 6 frames, got {len(frames)}")
        reads=[f["timing_us"]["read"] for f in frames];inf=[f["timing_us"]["inference"] for f in frames]
        print("SD_SPEED_PASS",run_id,"read_us",reads,"read_avg_us",sum(reads)//len(reads),"inference_avg_us",sum(inf)//len(inf))
    finally:worker.close();worker.join(2)


if __name__=="__main__":main()

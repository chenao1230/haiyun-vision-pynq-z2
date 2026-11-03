import argparse
import hashlib
import json
import time
from pathlib import Path
import numpy as np

# Retain buffers after failure until hardware is externally confirmed quiescent.
ACTIVE = []

def compare(actual, expected, atol=0, rtol=0):
    if actual.shape != expected.shape or actual.dtype != expected.dtype:
        raise ValueError('shape/dtype mismatch')
    if atol < 0 or rtol < 0 or not np.isfinite([atol, rtol]).all():
        raise ValueError('invalid tolerance')
    if actual.dtype.kind not in 'iuf' or not np.isfinite(actual).all() or not np.isfinite(expected).all():
        raise ValueError('unsupported dtype or non-finite values')
    if atol == 0 and rtol == 0:
        good = actual == expected
    else:
        if actual.dtype.kind in 'iu' and actual.dtype.itemsize > 4:
            raise ValueError('64-bit integer tolerance unsupported; use exact comparison')
        good = np.isclose(actual, expected, atol=atol, rtol=rtol)
    return {'passed': bool(good.all()), 'mismatches': int(np.count_nonzero(~good)), 'elements': int(actual.size)}

def wait_dma(dma, timeout):
    deadline = time.monotonic() + timeout
    while True:
        statuses = [int(dma.read(0x04)), int(dma.read(0x34))]
        if any(s & 0x71 for s in statuses):
            raise RuntimeError('DMA halted/error: ' + repr(statuses))
        if all(s & 2 for s in statuses):
            # Complete driver bookkeeping and cache maintenance once known idle.
            dma.sendchannel.wait()
            dma.recvchannel.wait()
            return statuses
        if time.monotonic() >= deadline:
            raise TimeoutError('DMA timeout: ' + repr(statuses))
        time.sleep(0.001)

def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()

def main():
    p = argparse.ArgumentParser()
    p.add_argument('contract', type=Path)
    p.add_argument('--inspect', action='store_true')
    p.add_argument('--report', type=Path, default=Path('report.json'))
    args = p.parse_args()
    report = {'board_tested': False, 'passed': False}
    dma = None
    buffers = []
    safe = True
    try:
        c = json.loads(args.contract.read_text(encoding='utf-8-sig'))
        root = args.contract.resolve().parent
        bit = root / c['bit']
        hwh = bit.with_suffix('.hwh')
        report['artifacts'] = {str(x): sha(x) for x in (args.contract, bit, hwh)}
        timeout = float(c['timeout_s'])
        if not np.isfinite(timeout) or timeout <= 0:
            raise ValueError('timeout must be finite and positive')
        from pynq import Overlay, allocate
        import pynq
        report['pynq_version'] = getattr(pynq, '__version__', 'unknown')
        ol = Overlay(str(bit))
        report['ip_names'] = list(ol.ip_dict)
        if c['dma'] not in ol.ip_dict:
            raise ValueError('DMA not found in Overlay')
        dma = getattr(ol, c['dma'])
        if args.inspect:
            for name in ol.ip_dict:
                print(name, getattr(getattr(ol, name), 'register_map', 'no register_map'))
            report['inspection_only'] = True
            return 0
        x = np.load(root / c['input'], allow_pickle=False)
        golden = np.load(root / c['golden'], allow_pickle=False)
        dtype = np.dtype(c['dtype'])
        if x.dtype != dtype or golden.dtype != dtype or dtype.kind not in 'iuf':
            raise ValueError('dtype contract mismatch')
        if list(x.shape) != c['input_shape'] or list(golden.shape) != c['output_shape'] or not x.size or not golden.size:
            raise ValueError('shape contract mismatch or empty buffer')
        compare(golden, golden, c.get('atol', 0), c.get('rtol', 0))
        if not np.isfinite(x).all():
            raise ValueError('non-finite input')
        report['data_hashes'] = {k: sha(root / c[k]) for k in ('input', 'golden')}
        writes = []
        for name, offset, value in c.get('start_writes', []):
            if name not in ol.ip_dict or not isinstance(offset, int) or offset < 0 or offset % 4 or not isinstance(value, int) or not 0 <= value <= 0xffffffff:
                raise ValueError('invalid register write')
            if offset + 4 > ol.ip_dict[name]['addr_range']:
                raise ValueError('register write exceeds IP range')
            writes.append((getattr(ol, name), offset, value))
        a = allocate(shape=x.shape, dtype=dtype)
        buffers.append(a)
        b = allocate(shape=golden.shape, dtype=dtype)
        buffers.append(b)
        a[:] = x
        b[:] = 0
        a.flush()
        b.flush()
        start = time.perf_counter()
        safe = False
        ACTIVE.extend(buffers)
        dma.recvchannel.transfer(b)
        for ip, offset, value in writes:
            ip.write(offset, value)
        dma.sendchannel.transfer(a)
        report['dma_status'] = wait_dma(dma, timeout)
        safe = True
        b.invalidate()
        report.update(compare(np.asarray(b), golden, c.get('atol', 0), c.get('rtol', 0)))
        report['host_transfer_compare_s'] = time.perf_counter() - start
        report['board_tested'] = True
        report['input_bytes'], report['output_bytes'] = a.nbytes, b.nbytes
        return 0 if report['passed'] else 1
    except Exception as exc:
        report['error'] = str(exc)
        if dma is not None:
            try:
                report['dma_status'] = [int(dma.read(4)), int(dma.read(0x34))]
            except Exception:
                pass
        report['buffers_retained_until_hardware_quiescent'] = not safe
        return 1
    finally:
        if safe:
            for buf in buffers:
                ACTIVE[:] = [v for v in ACTIVE if v is not buf]
                buf.freebuffer()
        args.report.write_text(json.dumps(report, indent=2, ensure_ascii=False), encoding='utf-8')

if __name__ == '__main__':
    result = main()
    if ACTIVE:
        print('Hardware may still access buffers. Confirm hardware stopped/reset before exiting this process.')
        # Keep process and physical allocations alive; operator ends after quiescence.
        while True:
            time.sleep(1)
    raise SystemExit(result)

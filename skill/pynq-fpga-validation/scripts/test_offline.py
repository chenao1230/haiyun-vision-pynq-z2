import unittest
import numpy as np
from check import compare, wait_dma

class FakeDMA:
    def __init__(self, status):
        self.status = status
        self.calls = 0
        self.sendchannel = self.recvchannel = self
    def read(self, offset): return self.status
    def wait(self): self.calls += 1

class Tests(unittest.TestCase):
    def test_exact_large_integer(self):
        a = np.array([2**63], dtype='uint64')
        self.assertFalse(compare(a, a + 1)['passed'])
    def test_tolerance(self):
        self.assertTrue(compare(np.array([1.01]), np.array([1.0]), atol=.02)['passed'])
    def test_nan(self):
        with self.assertRaises(ValueError): compare(np.array([np.nan]), np.array([np.nan]))
    def test_shape(self):
        with self.assertRaises(ValueError): compare(np.zeros(2), np.zeros(3))
    def test_dma_completion(self):
        d = FakeDMA(2)
        wait_dma(d, .01)
        self.assertEqual(d.calls, 2)
    def test_dma_error(self):
        with self.assertRaises(RuntimeError): wait_dma(FakeDMA(0x12), .01)
    def test_dma_timeout(self):
        with self.assertRaises(TimeoutError): wait_dma(FakeDMA(0), .002)

unittest.main(verbosity=2)

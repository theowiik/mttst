import unittest
from mathz import Mathz


class TestMathz(unittest.TestCase):
    def setUp(self):
        self.mathz = Mathz()

    def test_add(self):
        self.assertEqual(self.mathz.add(1, 2), 3)

    def test_subtract(self):
        self.assertEqual(self.mathz.subtract(5, 2), 3)

    def test_multiply(self):
        self.assertEqual(self.mathz.multiply(3, 4), 12)

    def test_divide(self):
        self.assertEqual(self.mathz.divide(10, 2), 5)

        with self.assertRaises(ZeroDivisionError):
            self.mathz.divide(1, 0)

    def test_less_or_equal(self):
        self.assertTrue(self.mathz.less_or_equal(1, 2))
        self.assertTrue(self.mathz.less_or_equal(2, 2))
        self.assertFalse(self.mathz.less_or_equal(3, 2))


if __name__ == "__main__":
    unittest.main()

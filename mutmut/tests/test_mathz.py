import unittest
from src.mathz import Mathz


class TestMathz(unittest.TestCase):
    def setUp(self):
        self.mathz = Mathz()

    def test_add(self):
        self.assertEqual(self.mathz.add(1, 2), 3)
        self.assertEqual(self.mathz.add(0, 0), 0)

    def test_less_or_equal(self):
        self.assertTrue(self.mathz.less_or_equal(1, 2))
        self.assertTrue(self.mathz.less_or_equal(2, 2))
        self.assertFalse(self.mathz.less_or_equal(3, 2))


if __name__ == "__main__":
    unittest.main()

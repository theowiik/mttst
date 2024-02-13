#include <stdexcept>

class Mathz {
public:
    static bool less_or_equal(const double a, const double b) {
        return a <= b;
    }

    static bool greater_or_equal(const double a, const double b) {
        return a >= b;
    }

    static double add(const double a, const double b) {
        return a + b;
    }

    static double multiply(const double a, const double b) {
        return a * b;
    }

    static double divide(const double a, const double b) {
        if (b == 0) throw std::invalid_argument("Cannot divide by 0");
        return a / b;
    }
};

#include <cassert>
#include "math_utils.h"

int main() {
    assert(MathUtils::less_or_eq(3, 4));
    assert(!MathUtils::less_or_eq(5, 4));
    return 0;
}

#include <iostream>
#include "math_utils.h"

int main()
{
    std::cout << "Is 3 less or equal to 4? " << (MathUtils::less_or_eq(3, 4) ? "Yes" : "No") << std::endl;
    return 0;
}

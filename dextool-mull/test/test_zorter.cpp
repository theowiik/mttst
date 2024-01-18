// Probably not good but whatevah
#include "../catch.hpp"
#include "../src/zorter.cpp"

TEST_CASE("Array sorting", "[zorter]") {
    const std::vector arr = {64, 34, 25, 12, 22, 11, 90};
    const std::vector<int> sortedArr = Zorter::sort(arr);
    const std::vector expectedArr = {11, 12, 22, 25, 34, 64, 90};

    REQUIRE(sortedArr == expectedArr);
}

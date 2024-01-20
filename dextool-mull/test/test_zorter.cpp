#include "../catch.hpp"
#include "../src/zorter.cpp"

TEST_CASE("Array sorting", "[zorter]") {
    // NOTE: Not good code!! Just for testing purposes

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    Zorter::sort(arr, size);

    int expectedArr[] = {11, 12, 22, 25, 34, 64, 90};

    for (int i = 0; i < size; ++i) {
        REQUIRE(arr[i] == expectedArr[i]);
    }
}

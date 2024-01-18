#define CATCH_CONFIG_MAIN

// Probably not good but whatevah
#include "../catch.hpp"
#include "../src/mathz.cpp"

TEST_CASE("Greater or Equal - First Greater", "[greater_or_equal]") {
    Mathz m;
    REQUIRE(m.greater_or_equal(5, 3));
}

// Dont want to test this boundary case, want a mutation to survive
// TEST_CASE("Greater or Equal - Equal Values", "[greater_or_equal]") {
//     Mathz m;
//     REQUIRE(m.greater_or_equal(4, 4));
// }

TEST_CASE("Greater or Equal - First Lesser", "[greater_or_equal]") {
    Mathz m;
    REQUIRE_FALSE(m.greater_or_equal(2, 3));
}

TEST_CASE("Add - 1 + 1 = 2", "[add]") {
    Mathz m;
    REQUIRE(m.add(1, 1) == 2);
}

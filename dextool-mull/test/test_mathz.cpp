#define CATCH_CONFIG_MAIN

// Probably not good but whatevah
#include "../catch.hpp"
#include "../src/mathz.cpp"

TEST_CASE("Greater or Equal - First Greater", "[greater_or_equal]")
{
    Mathz m;
    REQUIRE(m.greater_or_equal(5, 3));
}

// Dont want to test this boundary case, want a mutation to survive
// TEST_CASE("Greater or Equal - Equal Values", "[greater_or_equal]") {
//     Mathz m;
//     REQUIRE(m.greater_or_equal(4, 4));
// }

TEST_CASE("Greater or Equal - First Lesser", "[greater_or_equal]")
{
    Mathz m;
    REQUIRE_FALSE(m.greater_or_equal(2, 3));
}

TEST_CASE("Lesser or Equal - Same number", "[lesser_or_equal]")
{
    Mathz m;
    REQUIRE_FALSE(m.less_or_equal(4, 4));
}

TEST_CASE("Add - 1 + 1 = 2", "[add]")
{
    Mathz m;
    REQUIRE(m.add(1, 1) == 2);
}

TEST_CASE("Multiply - 5 * 2 = 10", "[multiply]")
{
    Mathz m;
    REQUIRE(m.multiply(5, 2) == 10);
}

TEST_CASE("Divide - 20 / 5 = 4", "[divide]")
{
    Mathz m;
    REQUIRE(m.divide(20, 5) == 4);
}

TEST_CASE("Divide by 0 - 20 / 0 = Exception", "[divide]")
{
    Mathz m;
    REQUIRE_THROWS(m.divide(20, 0));
}

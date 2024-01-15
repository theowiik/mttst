#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "mathz.cpp"

int theAnswer() { return 40 + 2; }

TEST_CASE("Life, the universe and everything", "[42][theAnswer]") {
    REQUIRE(theAnswer() == 42);
}

TEST_CASE("Greater or Equal - First Greater", "[greater_or_equal]") {
    Mathz m;
    REQUIRE(m.greater_or_equal(5, 3));
}

TEST_CASE("Greater or Equal - Equal Values", "[greater_or_equal]") {
    Mathz m;
    REQUIRE(m.greater_or_equal(4, 4));
}

TEST_CASE("Greater or Equal - First Lesser", "[greater_or_equal]") {
    Mathz m;
    REQUIRE_FALSE(m.greater_or_equal(2, 3));
}

TEST_CASE("Greater or Equal - Negative Values", "[greater_or_equal]") {
    Mathz m;
    REQUIRE(m.greater_or_equal(-1, -2));
}

TEST_CASE("Greater or Equal - Zero Values", "[greater_or_equal]") {
    Mathz m;
    REQUIRE(m.greater_or_equal(0, 0));
}

#define CATCH_CONFIG_MAIN

// Probably not good but whatevah
#include "../catch.hpp"
#include "../src/geometry.cpp"

TEST_CASE("Triangle area", "[triangle]")
{
    auto gm = Geometry();
    REQUIRE(gm.triangle_area(10, 5) == 25);
}

TEST_CASE("Rectangle area equivalent", "[same_rectangle_area]")
{
    auto gm = Geometry();
    REQUIRE(gm.same_rectangle_area(10, 5, 5, 10));
}

TEST_CASE("Rectangle area not equivalent", "[same_rectangle_area]")
{
    auto gm = Geometry();
    REQUIRE(!gm.same_rectangle_area(10, 4, 5, 10));
}

TEST_CASE("Square perimeter", "[square_perimeter]")
{
    auto gm = Geometry();
    REQUIRE(gm.square_perimeter(10) == 40);
}
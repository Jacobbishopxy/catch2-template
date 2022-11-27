#include <catch2/catch_test_macros.hpp>

#include "factorial.h"

TEST_CASE("test case #1", "[one]")
{
    REQUIRE(Factorial(0) == 1);
}

TEST_CASE("test case #2", "[two]")
{
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 3628800);
}

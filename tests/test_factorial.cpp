#include <catch2/catch_test_macros.hpp>

#include "factorial.h"

TEST_CASE("factorial test #1", "[one]")
{
    REQUIRE(factorial(0) == 1);
}

TEST_CASE("factorial test #2", "[two]")
{
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3628800);
}

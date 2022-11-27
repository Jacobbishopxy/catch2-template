#include <catch2/catch_test_macros.hpp>

#include "binomial.h"

TEST_CASE("binomial test #1", "[one]")
{
    REQUIRE(binomial(1, 1) == 1);
}

TEST_CASE("binomial test #2", "[two]")
{
    REQUIRE(binomial(57, 57) == 1);
    REQUIRE(binomial(6, 3) == 20);
    REQUIRE(binomial(10, 5) == 252);
    REQUIRE(binomial(20, 10) == 184756);
}

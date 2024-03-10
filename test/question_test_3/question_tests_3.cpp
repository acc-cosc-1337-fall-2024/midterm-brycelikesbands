#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test decimal_to_hex function") {
    SECTION("Valid input") {
        REQUIRE(decimal_to_hex(10) == "A");
        REQUIRE(decimal_to_hex(170) == "AA");
        REQUIRE(decimal_to_hex(255) == "FF");
    }

    SECTION("Number out of range") {
        REQUIRE(decimal_to_hex(0) == "Number must be in the range of 1 to 512.");
        REQUIRE(decimal_to_hex(513) == "Number must be in the range of 1 to 512.");
    }
}
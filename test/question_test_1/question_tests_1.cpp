#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Test find_gcd function") {
    // Test cases
    SECTION("Valid input") {
        REQUIRE(find_gcd(15, 25) == 5);
        REQUIRE(find_gcd(16, 32) == 16);
        REQUIRE(find_gcd(159, 309) == 3);
    }

    SECTION("Numbers out of range") {
        REQUIRE(find_gcd(0, 25) == -1);
        REQUIRE(find_gcd(15, 201) == -1);
        REQUIRE(find_gcd(-10, 309) == -1);
    }
}
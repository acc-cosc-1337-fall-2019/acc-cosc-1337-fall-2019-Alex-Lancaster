#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing get_grade_ponts entry")
{
	REQUIRE(get_grade_points("A") == 4);
}

TEST_CASE("Test calculate_gpa quotient")
{
	REQUIRE(calculate_gpa(9, 27) == 3);
}
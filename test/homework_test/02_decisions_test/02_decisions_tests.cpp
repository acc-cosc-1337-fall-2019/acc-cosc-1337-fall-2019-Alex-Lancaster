#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/02_decisions/decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing get_grade_ponts entry")
{
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("B") == 3);
	REQUIRE(get_grade_points("C") == 2);
	REQUIRE(get_grade_points("D") == 1);
	REQUIRE(get_grade_points("F") == 0);
}

TEST_CASE("Test calculate_gpa quotient")
{
	REQUIRE(calculate_gpa(9, 27) == 3);
	REQUIRE(calculate_gpa(2, 8) == 4);
	REQUIRE(calculate_gpa(4, 15) == 3.75);
	REQUIRE(calculate_gpa(1, 1) == 1);
}
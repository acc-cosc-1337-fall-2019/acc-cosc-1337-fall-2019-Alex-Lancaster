#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test payroll function")
{
	REQUIRE(gross_salary(40, 10) == 400);
	REQUIRE(gross_salary(40, 20) == 800);
}

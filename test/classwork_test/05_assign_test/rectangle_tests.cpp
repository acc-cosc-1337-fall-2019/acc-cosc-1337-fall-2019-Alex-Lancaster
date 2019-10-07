#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test rectangle initialize")
{
	acc::Rectangle r(4, 5);
	acc::Rectangle s(10, 10);
	acc::Rectangle t(100, 10);

	REQUIRE(r.get_area() == 20);
	REQUIRE(s.get_area() == 100);
	REQUIRE(t.get_area() == 1000);

}
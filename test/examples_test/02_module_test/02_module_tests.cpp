#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if_else.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test get generation")
{
	REQUIRE(get_generation(2000) == "Centential");
	REQUIRE(get_generation(1990) == "Millenial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1960) == "Baby Boomer");
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1776) == "Invalid");
}


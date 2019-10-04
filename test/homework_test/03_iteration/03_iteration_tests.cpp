#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get GC content function")
{
	REQUIRE(get_gc_content("GATTACA") == .285714);
	REQUIRE(get_gc_content("GATCCCTAGA") == .50);
}

TEST_CASE("Test get reverse string function")
{
	REQUIRE(get_reverse_string("GATTACA") == "ACATTAG");
	REQUIRE(get_reverse_string("GATCCCTAGA") == "AGATCCCTAG");
}

TEST_CASE("Test DNA complement function")
{
	REQUIRE(get_dna_complement("GATTACA") == "CTAATGT");
	REQUIRE(get_dna_complement("GATCCCTAGA") == "CTAGGGATCT");
}
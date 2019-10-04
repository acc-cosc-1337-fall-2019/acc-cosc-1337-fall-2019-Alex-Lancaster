#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../../../homework/04_vectors/vectors.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test the max value funtion from vector")
{
	vector<int> vectorX{ 1, 2, 3, 4, 5, 60 };
	REQUIRE(get_max_from_vector(vectorX) == 60);
	vector<int> vectorY{ 21, 22, 33, 3244, 55, 610 };
	REQUIRE(get_max_from_vector(vectorY) == 3244);
	vector<int> vectorZ{ 1111, 112, 13, 24, 54, 3160 };
	REQUIRE(get_max_from_vector(vectorZ) == 3160);
}

TEST_CASE("Test is prime function")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(3) == true);
	REQUIRE(is_prime(6) == false);
	REQUIRE(is_prime(11) == true);
	REQUIRE(is_prime(64) == false);
}

TEST_CASE("Test function vector of primes")
{
	vector<int> vectorX{ 2,3 };
	REQUIRE(vector_of_primes(5) == vectorX);
	vector<int> vectorY{ 2,3,5,7 };
	REQUIRE(vector_of_primes(10) == vectorY);
	vector<int> vectorZ{ 2,3,5,7,11,13,17,19,23 };
	REQUIRE(vector_of_primes(24) == vectorZ);
}
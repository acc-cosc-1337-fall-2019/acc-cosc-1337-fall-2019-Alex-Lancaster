#include "vectors.h"
#include <string>
#include <iostream>

using std::cin;
using std::cout;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	auto selection = 'y';
	do
	{
		int menuChoice = 1;
		cout << "Enter 1 to return the max value from vector, or 2 to return any primes within it." << "\n";
		cin >> menuChoice;

		if (menuChoice == 1)
		{
			// write menu and function returns
		}
	}

	return 0;
}
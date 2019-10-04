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
	auto userSelection = 'y';
	do
	{
		int userMenu = 1;
		cout << "Enter 1 to return the max value from an entered vector, or 2 to return any primes up until a number. Anything else to quit" << "\n";
		cin >> userMenu;

		if (userMenu == 1)
		{
			vector<int> testVector{};

			do
			{
				cout << "Enter a values to be added to a test vector: " << "\n";
				int input;
				cin >> input;
				testVector.push_back(input);
				cout << "Enter another vector value? y/n: " << "\n";
				cin >> userSelection;
			} while (userSelection == 'y' || userSelection == 'Y');

			cout << "The maximum value from the vector is: " << get_max_from_vector(testVector) << "\n";
		}
		else if (userMenu == 2)
		{
			cout << "Choose a number to recieve all the prime numbers preceding it: " << "\n";
			int primeList;
			cin >> primeList;
			for (int i = 0; i < vector_of_primes(primeList).size(); ++i)
			{
				cout <<  vector_of_primes(primeList)[i] << "\n";
			}
		}
		else
		{
			cout << "Invalid option" << "\n";
		}

		cout << "Continue? y/n: " << "\n";
		cin >> userSelection;

	} while (userSelection == "y" || userSelection == "Y");

	return 0;
}

	

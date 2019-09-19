//write include statements
#include "dna.h"
#include <iostream>

//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto user_choice = 'y';
	int num = 0;
	int result = 0;

	do
	{
		cout << "Enter 1 for get GC content, 2 for get DNA complement: ";
		cin >> num;
		result = menu(num);
		cout << "Factorial: " << result;

		cout << "Continue...y or n: ";
		cin >> user_choice;

	} while (user_choice == 'y' || user_choice == 'Y');
	return 0;
}
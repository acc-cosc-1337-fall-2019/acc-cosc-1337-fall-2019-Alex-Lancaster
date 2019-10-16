#include<iostream>
#include<vector>
#include "checking_account.h"
#include "savings_account.h"

using std::cout;
using std::cin;
using std::vector;


int main()
{
	CheckingAccount a(1500); // Assigning a beginning amount to account
	//cout << a.get_balance();
	cout << a;
	SavingsAccount savings(500);
	cout << savings;
	cout << "\n" << savings.get_balance() << "\n";
	savings.add_interest();
	cout << savings;

	BankAccount c = a + savings;

	cout << c;


	return 0;
}


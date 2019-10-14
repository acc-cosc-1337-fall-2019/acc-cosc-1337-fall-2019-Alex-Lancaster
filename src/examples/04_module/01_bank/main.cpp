#include<iostream>
#include<vector>
#include "checking_account.h"

using std::cout;
using std::cin;
using std::vector;


int main()
{
	CheckingAccount a(1500); // Assigning a beginning amount to account
	cout << a.get_balance();

	return 0;
}


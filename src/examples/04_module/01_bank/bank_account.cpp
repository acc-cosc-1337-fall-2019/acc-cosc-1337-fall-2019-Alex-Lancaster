#include "bank_account.h"


BankAccount::BankAccount()
{
	//code to read balance from database (no database yet)
	balance = 500;
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
		//balance = balance + amount;
	}
}

void BankAccount::withdraw(int amount)
{
	if (balance > amount)
	{
		balance -= amount;
	}
}

int BankAccount::get_balance() const
{
	return balance;
}

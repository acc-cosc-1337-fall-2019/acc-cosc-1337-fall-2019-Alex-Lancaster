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

BankAccount BankAccount::operator+(const BankAccount & b)
{
	BankAccount account;
	account.balance = balance + b.balance;

	return account;
}

int BankAccount::get_balance() const
{
	return balance;
}

void display(const BankAccount & account)
{
	std::cout << "Balance: " << account.balance << "\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "Balance: " << b.balance << "\n";

	return out;
}

std::istream & operator >> (std::istream & in, BankAccount & b)
{
	int amt;
	std::cout << "\nEnter Amount: ";
	in >> amt;

	b.deposit(amt);

	return in;
}

#include "atm.h"
#include<iostream>
#ifndef ATM_H
#define ATM_H

//atm.cpp

using std::cout;


ATM::ATM(BankAccount a) :account(a)
{
	// have a class that gets blance from a database

}

void ATM::deposit(int amount)
{
	account.deposit(amount);
}

void ATM::withdraw(int amount)
{
	account.withdraw(amount);
}

void ATM::display_balance() const
{
	cout << "Balance: " << account.get_balance();
}

#endif
//bank_account.h
#include<iostream>

#ifndef BANK_ACCOUNT_H // header-guard to prevent class redefinition
#define BANK_ACCOUNT_H

class BankAccount
{
public:
	BankAccount(); // this is the constructor
	BankAccount(int b) : balance(b) {}; //inline constructor

	int get_balance() const; //const makes class members read only
	void deposit(int amount);
	void withdraw(int amount); 

	friend void display(const BankAccount & account);
	friend std::ostream & operator << (std::ostream & out, const BankAccount & b);
	friend std::istream & operator >> (std::istream & in, BankAccount & b);
	BankAccount operator+(const BankAccount& b);


protected:
	int balance;

};

#endif
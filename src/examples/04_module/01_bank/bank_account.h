//bank_account.h
#ifndef BANK_ACCOUNT_H // header-guard to prevent class redefinition
#define BANK_ACCOUNT_H

class BankAccount
{
public:
	BankAccount(); // this is the constructor
	BankAccount(int b) : balance(b) {}; //inline constructor
	void deposit(int amount);
	void withdraw(int amount);
	int get_balance() const; //const makes class members read only

private:
	int balance;


};

#endif
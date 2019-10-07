//atm.h
#include "bank_account.h"

class ATM
{

public:
	ATM(BankAccount a);
	void deposit(int amount);
	void withdraw(int amount);
	void display_balance() const;


private:
	BankAccount account;

};

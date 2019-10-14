//checking_account.h
#include "bank_account.h"

class CheckingAccount : public BankAccount //Base class of Account, CheckingAccount derives from it
{
public:

	CheckingAccount(int bal) : BankAccount(bal) {}
	int get_balance()const; // same as return BankAccoounts::get_balance();
private:


};
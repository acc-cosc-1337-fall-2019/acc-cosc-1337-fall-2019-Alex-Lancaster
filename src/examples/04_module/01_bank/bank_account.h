//bank_account.h
class BankAccount
{
public:
	BankAccount(); // this is the constructor
	void deposit(int amount);
	int get_balance();

private:
	int balance;


};
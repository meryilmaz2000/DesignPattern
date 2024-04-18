#pragma once
#include <iostream>
class FundsCheck
{
private:
	double CashInAccount = 1000.00;
	void decreaseCashInAccount(double cashWithdrawn);
	void increaseCashInAccount(double cashDeposited);
public:
	double getCashInAccount();
	bool haveEnoughMoney(double cashToWithdrawal);
	void makeDeposit(double cashToDeposit);
};


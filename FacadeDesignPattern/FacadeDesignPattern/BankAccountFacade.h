#pragma once
#include "AccountNumberCheck.h"
#include "SecurityCodeCheck.h"
#include "FundsCheck.h"
#include "WelcomeToBank.h"

class BankAccountFacade
{
private:
	int accountNumber;
	int securityCode;
	AccountNumberCheck *accChecker;
	SecurityCodeCheck *secChecker;
	FundsCheck *fundChecker;
	WelcomeToBank *bankWelcome;
public:
	BankAccountFacade(int newAcctNum , int newSecNum);
	int getSecurityCode();
	int getAccountNumber();
	void withdrawCash(double cashToGet);
	void depositCash(double cashToDeposit);
};


#include "BankAccountFacade.h"

BankAccountFacade::BankAccountFacade(int newAcctNum, int newSecNum) {
	this->accountNumber = newAcctNum;
	this->securityCode = newSecNum;

	bankWelcome = new WelcomeToBank();
	accChecker = new AccountNumberCheck();
	secChecker = new SecurityCodeCheck();
	fundChecker = new FundsCheck();
}

int BankAccountFacade::getSecurityCode() {
	return this->securityCode;
}
int BankAccountFacade::getAccountNumber() {
	return this->accountNumber;
}
void BankAccountFacade::withdrawCash(double cashToGet){
	if (accChecker->accountActive(accountNumber) && secChecker->checkSecurityCode(securityCode)
		&& fundChecker->haveEnoughMoney(cashToGet)) {
		std::cout << "Transaction Complete !" << std::endl;
	}
	else {
		std::cout << "Transaction Failed !" << std::endl;
	}
}
void BankAccountFacade::depositCash(double cashToDeposit) {
	if (accChecker->accountActive(accountNumber) && secChecker->checkSecurityCode(securityCode)) 
	{
		fundChecker->makeDeposit(cashToDeposit);
		std::cout << "Transaction Complete !" << std::endl;
	}
	else {
		std::cout << "Transaction Failed !" << std::endl;
	}
}

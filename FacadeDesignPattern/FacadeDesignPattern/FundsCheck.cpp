#include "FundsCheck.h"

double FundsCheck::getCashInAccount() {
	return this->CashInAccount;
}

void FundsCheck::decreaseCashInAccount(double cashWithdrawn) {
	CashInAccount -= cashWithdrawn;
}
void FundsCheck::increaseCashInAccount(double cashDeposited) {
	CashInAccount += cashDeposited;
}
bool FundsCheck::haveEnoughMoney(double cashToWithdrawal) {
	if (cashToWithdrawal > getCashInAccount()) {
		std::cout << "ERROR : You don't have enough money!" << std::endl;
		std::cout << "Current Balance : " << getCashInAccount() << " $" << std::endl;
		return false;
	}
	else {
		decreaseCashInAccount(cashToWithdrawal);
		std::cout << "Withdrawal complete : Current Balance is : " << getCashInAccount() << " $" << std::endl;
		return true;
	}
}

void FundsCheck::makeDeposit(double cashToDeposit) {
	increaseCashInAccount(cashToDeposit);
	std::cout <<"Deposit complete : Current Balance is : " << getCashInAccount() << " $" << std::endl;

}
#include "AccountNumberCheck.h"

int AccountNumberCheck::getAccountNumber() {
	return this->accountNumber;
}
bool AccountNumberCheck::accountActive(int accountNumberToCheck) {
	if (this->accountNumber == accountNumberToCheck) {
		return true;
	}
	else {
		return false;
	}
}
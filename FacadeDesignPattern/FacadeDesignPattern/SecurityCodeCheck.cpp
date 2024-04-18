#include "SecurityCodeCheck.h"

int SecurityCodeCheck::getSecurityCode() {
	return this->securityCode;
}
bool SecurityCodeCheck::checkSecurityCode(int secCodeToCheck) {
	if (secCodeToCheck == this->securityCode) {
		return true;
	}
	else {
		return false;
	}
}
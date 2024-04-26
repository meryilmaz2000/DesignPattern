#pragma once
#include <iostream>
class ATMState {

public:
	virtual void insertCard() = 0;
	virtual void ejectCard() = 0;
	virtual void insertPin(int pinEntered) = 0;
	virtual void requestCash(int cashToWithdraw) = 0;
};
#pragma once
#include "ATMState.h"
#include "ATMMachine.h"
class ATMMachine; //forward declaration !
class HasPin : public ATMState
{
private:
	ATMMachine* atmMachine = nullptr;
public:
	HasPin(ATMMachine* atmMachine);
	void insertCard();
	void ejectCard();
	void insertPin(int pinEntered);
	void requestCash(int cashToWithdraw);
};


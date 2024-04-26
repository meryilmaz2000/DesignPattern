#pragma once
#include "ATMState.h"
#include "ATMMachine.h"
class ATMMachine; //forward declaration !
class NoCash : public ATMState
{
private:
	ATMMachine* atmMachine = nullptr;
public:
	NoCash(ATMMachine* atmMachine);
	void insertCard();
	void ejectCard();
	void insertPin(int pinEntered);
	void requestCash(int cashToWithdraw);
};


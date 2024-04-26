#pragma once
#include "ATMState.h"
#include "ATMMachine.h"
class ATMMachine; //forward declaration !
class NoCard : public ATMState
{
private:
	ATMMachine* atmMachine = nullptr;
public:
	NoCard(ATMMachine* atmMachine);
	void insertCard();
	void ejectCard();
	void insertPin(int pinEntered);
	void requestCash(int cashToWithdraw);
};


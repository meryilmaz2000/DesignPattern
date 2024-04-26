#pragma once
#include "ATMState.h"
#include "ATMMachine.h"
class ATMMachine; //forward declaration !
class HasCard : public ATMState
{
private:
	ATMMachine* atmMachine ;
public:
	HasCard(ATMMachine* atmMachine) ;
	void insertCard() override;
	void ejectCard() override;
	void insertPin(int pinEntered) override;
	void requestCash(int cashToWithdraw) override;
};


#pragma once
#include "ATMState.h"
#include "HasCard.h"
#include "HasPin.h"
#include "NoCard.h"
#include "NoCash.h"
#include "IGetATMData.h"


class ATMMachine : public IGetATMData
{
private:
	ATMState* hasCardState = nullptr;
	ATMState* noCardState = nullptr;
	ATMState* hasCorrectPinState = nullptr;
	ATMState* atmOutOfMoneyState = nullptr;

	ATMState* atmCurrentState = nullptr;

	int cashInMachine = 2000;
	bool isCorrectPinEntered = false;
public:
	ATMMachine(); //constructor
	void setATMState(ATMState* newATMState);
	void setCashInMachine(int newCashInMachine);
	int getCashInMachine();
	//we will call all below functions with curretnState of ATM.
	void insertCard();
	void ejectCard();
	void insertPin(int pinEntered);
	void requestCash(int cashEntered);
	//to learn which state in
	ATMState* getHasCardState();
	ATMState* getNoCardState();
	ATMState* getHasPinState();
	ATMState* getNoCashState();
	void changeCorrectPinState(bool currState);

	ATMState* getATMData() override;
	int getCashInMachineViaAbstract() override;
};


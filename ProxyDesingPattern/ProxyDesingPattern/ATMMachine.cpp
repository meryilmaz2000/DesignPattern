#include "ATMMachine.h"

ATMMachine::ATMMachine() { //constructor
	// CARD STATE IMPLEMENTATION
	hasCardState = new HasCard(this);
	noCardState = new NoCard(this);
	atmOutOfMoneyState = new NoCash(this);
	hasCorrectPinState = new HasPin(this);

	atmCurrentState = noCardState;
	if (cashInMachine < 0) {
		atmCurrentState = atmOutOfMoneyState;
	}
	std::cout << "Newly created !" << std::endl;
}
void ATMMachine::setATMState(ATMState* newATMState) {
	atmCurrentState = newATMState;
}
void ATMMachine::setCashInMachine(int newCashInMachine) {
	if (newCashInMachine <= 0) {
		std::cout << "WARNING : Invalid parameter !" << std::endl;
	}
	else {
		cashInMachine = newCashInMachine;
		std::cout << "INFO : Successful !" << std::endl;
		if (atmCurrentState == atmOutOfMoneyState) {
			atmCurrentState = noCardState;
		}
	}

}
int ATMMachine::getCashInMachine() {
	return cashInMachine;
}
//we will call all below functions with curretnState of ATM.
void ATMMachine::insertCard() {
	atmCurrentState->insertCard();
}
void ATMMachine::ejectCard() {
	atmCurrentState->ejectCard();
}
void ATMMachine::insertPin(int pinEntered) {
	atmCurrentState->insertPin(pinEntered);
}
void ATMMachine::requestCash(int cashEntered) {
	atmCurrentState->requestCash(cashEntered);
}
//to learn which state in
ATMState* ATMMachine::getHasCardState() {
	return hasCardState;
}
ATMState* ATMMachine::getNoCardState() {
	return noCardState;
}
ATMState* ATMMachine::getHasPinState() {
	return hasCorrectPinState;
}
ATMState* ATMMachine::getNoCashState() {
	return atmOutOfMoneyState;
}

void ATMMachine::changeCorrectPinState(bool currState) {
	isCorrectPinEntered = currState;
}

ATMState* ATMMachine::getATMData(){
	return atmCurrentState;
}
int ATMMachine::getCashInMachineViaAbstract() {
	return cashInMachine;
}
#include "HasCard.h"

HasCard::HasCard(ATMMachine* atmMachine) {
	this->atmMachine = atmMachine;
}
void HasCard::insertCard() {
	std::cout << "You can not enter more than one card !" << std::endl;
}
void HasCard::ejectCard() {
	std::cout << "Card ejected !" << std::endl;
	atmMachine->setATMState(atmMachine->getNoCardState());
}
void HasCard::insertPin(int pinEntered) {
	if (pinEntered == 1234) {
		std::cout << "Correct PIN !" << std::endl;
		atmMachine->changeCorrectPinState(true);
		atmMachine->setATMState(atmMachine->getHasPinState());
	}
	else {
		std::cout << "Wrong PIN !" << std::endl;
		atmMachine->changeCorrectPinState(false);
		std::cout << "Card Ejected !" << std::endl;
		atmMachine->setATMState(atmMachine->getNoCardState());
	}
}
void HasCard::requestCash(int cashToWithdraw) {
	std::cout << "Enter PIN first !" << std::endl;
}
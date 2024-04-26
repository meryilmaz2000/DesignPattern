#include "HasPin.h"

HasPin::HasPin(ATMMachine* atmMachine) {
	this->atmMachine = atmMachine;
}
void HasPin::insertCard() {
	std::cout << "You cannot enter more than one card !" << std::endl;
}
void HasPin::ejectCard() {
	std::cout << "Card Ejected !" << std::endl;
}
void HasPin::insertPin(int pinEntered) {
	std::cout << "You have already entered a PIN !" << std::endl;
}
void HasPin::requestCash(int cashToWithdraw) {
	if (cashToWithdraw > atmMachine->getCashInMachine()) {
		std::cout << "Not enough cash in machine !" << std::endl;
		std::cout << "Card Ejected !" << std::endl;
		atmMachine->setATMState(atmMachine->getNoCardState());
	}
	else {
		std::cout << cashToWithdraw << " is provided by the machine !" << std::endl;
		atmMachine->setCashInMachine(atmMachine->getCashInMachine() - cashToWithdraw);
		std::cout << "Card Ejected !" << std::endl;
		if (atmMachine->getCashInMachine() > 0) {
			atmMachine->setATMState(atmMachine->getNoCardState());
		}
		else {
			atmMachine->setATMState(atmMachine->getNoCashState());
		}

	}
}
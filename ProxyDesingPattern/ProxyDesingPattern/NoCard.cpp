#include "NoCard.h"
NoCard::NoCard(ATMMachine* atmMachine) {
	this->atmMachine = atmMachine;
}
void NoCard::insertCard() {
	std::cout << "Please enter a PIN !" << std::endl;
	atmMachine->setATMState(atmMachine->getHasCardState());
}
void NoCard::ejectCard() {
	std::cout << "Enter a card first !" << std::endl;
}
void NoCard::insertPin(int pinEntered) {
	std::cout << "Enter a card first !" << std::endl;
}
void NoCard::requestCash(int cashToWithdraw) {
	std::cout << "Enter a card first !" << std::endl;
}
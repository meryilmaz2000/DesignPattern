#include "NoCash.h"

NoCash::NoCash(ATMMachine* atmMachine) {
	this->atmMachine = atmMachine;
}
void NoCash::insertCard() {
	std::cout << "We don't have money !" << std::endl;
}
void NoCash::ejectCard() {
	std::cout << "We don't have money ! You cannot enter a card" << std::endl;
}
void NoCash::insertPin(int pinEntered) {
	std::cout << "We don't have money !" << std::endl;
}
void NoCash::requestCash(int cashToWithdraw) {
	std::cout << "We don't have money !" << std::endl;
}
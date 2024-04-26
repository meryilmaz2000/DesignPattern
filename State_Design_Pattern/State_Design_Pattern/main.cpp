#include <iostream>
#include "ATMMachine.h"
using namespace std;

int main() {
	ATMMachine* firstAtmMachine = new ATMMachine();

	firstAtmMachine->insertCard();
	firstAtmMachine->ejectCard();
	firstAtmMachine->insertCard();
	firstAtmMachine->insertPin(1111);
	firstAtmMachine->insertPin(1234);
	firstAtmMachine->insertCard();
	firstAtmMachine->insertPin(1234);
	firstAtmMachine->requestCash(10000);
	firstAtmMachine->insertCard();
	firstAtmMachine->insertPin(1234);
	firstAtmMachine->requestCash(2000);
	firstAtmMachine->insertCard();
	firstAtmMachine->setCashInMachine(10000);
	firstAtmMachine->insertCard();
	firstAtmMachine->insertPin(1234);
	firstAtmMachine->requestCash(2500);




	return 0;
}
#include <iostream>
#include "IGetATMData.h"
#include "ATMMachine.h"
#include "ATMProxy.h"

using namespace std;

int main() {
	IGetATMData* realATMMachine = new ATMMachine();
	IGetATMData* atmProxy = new ATMProxy(dynamic_cast<ATMMachine*>(realATMMachine));
	
	//By using proxy, we cannot reach the all functions. So we can write our code more secure.
	cout << "Current ATM State : " << atmProxy->getATMData() << endl;
	cout << "Cash In Machine   : " << atmProxy->getCashInMachineViaAbstract() << " $" << endl;
	
	return 0;
}
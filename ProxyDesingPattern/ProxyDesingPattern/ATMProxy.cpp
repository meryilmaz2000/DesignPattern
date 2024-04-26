#include "ATMProxy.h"

ATMProxy::ATMProxy(ATMMachine *protectedATMMachine) {
	atmMachineProtectedByProxy = protectedATMMachine;
}
ATMState* ATMProxy::getATMData() {
	
	return atmMachineProtectedByProxy->getATMData();
}
int ATMProxy::getCashInMachineViaAbstract() {
	
	return atmMachineProtectedByProxy->getCashInMachine();
}

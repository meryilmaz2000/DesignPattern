#pragma once
#include "ATMState.h"

class IGetATMData {
public:
	virtual ATMState* getATMData() =0;
	virtual int getCashInMachineViaAbstract() = 0;
};

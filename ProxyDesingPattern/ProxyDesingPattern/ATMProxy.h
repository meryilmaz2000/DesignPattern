#pragma once
#include "IGetATMData.h"
#include "ATMMachine.h"

class ATMProxy : public IGetATMData
{
private:
	ATMMachine* atmMachineProtectedByProxy = nullptr;
public:
	ATMProxy(ATMMachine* protectedATMMachine);
	ATMState* getATMData() override;
	int getCashInMachineViaAbstract() override;
};


#pragma once
#include "ICommand.h"
#include "IElectronicDevice.h"
class TurnTVOff : public ICommand
{
private:
	IElectronicDevice* theDevice;
public:
	TurnTVOff(IElectronicDevice* newDevice);
	void execute();
	void undo();
};


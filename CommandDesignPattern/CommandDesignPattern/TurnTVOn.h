#pragma once
#include "ICommand.h"
#include "IElectronicDevice.h"
class TurnTVOn : public ICommand
{
private:
	IElectronicDevice* theDevice;
public:
	TurnTVOn(IElectronicDevice* newDevice);
	void execute();
	void undo();
};


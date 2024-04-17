#pragma once
#include "ICommand.h"
#include "IElectronicDevice.h"
class TurnTVDown : public ICommand
{
private:
	IElectronicDevice* theDevice;
public:
	TurnTVDown(IElectronicDevice* newDevice);
	void execute();
	void undo();
};

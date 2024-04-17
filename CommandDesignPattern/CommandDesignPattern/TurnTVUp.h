#pragma once
#include "ICommand.h"
#include "IElectronicDevice.h"
class TurnTVUp : public ICommand
{
private:
	IElectronicDevice* theDevice;
public:
	TurnTVUp(IElectronicDevice* newDevice);
	void execute();
	void undo();
};

#pragma once
#include "ICommand.h"
#include <list>
#include "IElectronicDevice.h"
class TurnItAllOff : public ICommand
{
private:
	std::list<IElectronicDevice*> theDevices;
public:
	TurnItAllOff(std::list<IElectronicDevice*> newList);
	void execute();
	void undo();
};


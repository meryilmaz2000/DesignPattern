#pragma once
#include "ICommand.h"
class DeviceButton
{
private:
	ICommand* command;
public:
	DeviceButton(ICommand* newCommand);
	void press();
	void pressUndo();
};


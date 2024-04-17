#include "DeviceButton.h"

DeviceButton::DeviceButton(ICommand* newCommand) {
	command = newCommand;
}
void DeviceButton::press() {
	this->command->execute();
}

void DeviceButton::pressUndo() {
	this->command->undo();
}
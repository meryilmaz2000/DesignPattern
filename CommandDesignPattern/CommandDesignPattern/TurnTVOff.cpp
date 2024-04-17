#include "TurnTVOff.h"

TurnTVOff::TurnTVOff(IElectronicDevice* newDevice) {
	this->theDevice = newDevice;
}
void TurnTVOff::execute() {
	theDevice->off();
}
void TurnTVOff::undo() {
	theDevice->on();
}
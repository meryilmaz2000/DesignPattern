#include "TurnTVOn.h"

TurnTVOn::TurnTVOn(IElectronicDevice* newDevice){
	this->theDevice = newDevice;
}
void TurnTVOn::execute() {
	theDevice->on();
}
void TurnTVOn::undo() {
	theDevice->off();
}
#include "TurnTVDown.h"

TurnTVDown::TurnTVDown(IElectronicDevice* newDevice) {
	this->theDevice = newDevice;
}
void TurnTVDown::execute() {
	theDevice->volumeDown();
}
void TurnTVDown::undo() {
	theDevice->volumeUp();
}
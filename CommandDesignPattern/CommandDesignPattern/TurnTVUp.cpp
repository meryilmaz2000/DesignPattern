#include "TurnTVUp.h"

TurnTVUp::TurnTVUp(IElectronicDevice* newDevice) {
	this->theDevice = newDevice;
}
void TurnTVUp::execute() {
	theDevice->volumeUp();
}
void TurnTVUp::undo() {
	theDevice->volumeDown();
}
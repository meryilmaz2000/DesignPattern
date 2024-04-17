#include "TurnItAllOff.h"

TurnItAllOff::TurnItAllOff(std::list<IElectronicDevice*> newList) {
	theDevices = newList;
}
void TurnItAllOff::execute() {
	for (IElectronicDevice* device : theDevices) {
		device->off();
	}
}
void TurnItAllOff::undo() {
	for (IElectronicDevice* device : theDevices) {
		device->on();
	}
}
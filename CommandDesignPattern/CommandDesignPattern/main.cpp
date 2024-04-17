#include <iostream>
#include "Television.h"
#include "Radio.h"
#include "TVRemote.h"
#include "TurnTVOn.h"
#include "TurnTVOff.h"
#include "TurnTVDown.h"
#include "TurnTVUp.h"
#include "DeviceButton.h"
#include "TurnItAllOff.h"
#include <list>
using namespace std;

int main() {
	TVRemote* remote = new TVRemote();
	IElectronicDevice* newDevice = remote->getDevice();

	TurnTVOn* onCommand = new TurnTVOn(newDevice);
	DeviceButton* onPressed = new DeviceButton(onCommand);
	onPressed->press();

	TurnTVOff* offCommand = new TurnTVOff(newDevice);
	onPressed = new DeviceButton(offCommand);
	onPressed->press();

	TurnTVUp* upCommand = new TurnTVUp(newDevice);
	onPressed = new DeviceButton(upCommand);
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();

	TurnTVDown* downCommand = new TurnTVDown(newDevice);
	onPressed = new DeviceButton(downCommand);
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();
	onPressed->press();

	//--------------------------------

	Television* theTV = new Television();
	Radio* theRadio = new Radio();
	std::list<IElectronicDevice*> *allDevices = new list<IElectronicDevice*>();
	allDevices->push_back(theTV);
	allDevices->push_back(theRadio);

	TurnItAllOff* turnOffAll = new TurnItAllOff(*allDevices);
	DeviceButton* turnThemOff = new DeviceButton(turnOffAll);
	turnThemOff->press();
	turnThemOff->pressUndo();
	system("pause>0");
	return 0;
}
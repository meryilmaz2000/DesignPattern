#pragma once
#include "IElectronicDevice.h"
class Radio : public IElectronicDevice
{
private:
	int volume = 0;
public:
	void on();
	void off();
	void volumeUp();
	void volumeDown();

};


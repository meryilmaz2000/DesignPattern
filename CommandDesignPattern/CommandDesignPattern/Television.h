#pragma once
#include "IElectronicDevice.h"

class Television : public IElectronicDevice
{
private:
	int volume = 0;
public:
	void on();
	void off();
	void volumeUp();
	void volumeDown();
};


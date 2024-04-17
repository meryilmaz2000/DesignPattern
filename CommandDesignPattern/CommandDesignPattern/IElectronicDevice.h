#pragma once
#include <iostream>
class IElectronicDevice {
public:
	virtual void on() = 0;
	virtual void off() = 0;
	virtual void volumeUp() = 0;
	virtual void volumeDown() = 0;
};



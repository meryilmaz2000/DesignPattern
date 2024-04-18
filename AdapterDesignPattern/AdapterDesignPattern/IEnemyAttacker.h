#pragma once
#include <cstdlib>
#include <iostream>

class IEnemyAttacker {
public:
	virtual void fireWeapon() = 0;
	virtual void driveForward() = 0;
	virtual void assignDriver(std::string driverName) = 0;
};

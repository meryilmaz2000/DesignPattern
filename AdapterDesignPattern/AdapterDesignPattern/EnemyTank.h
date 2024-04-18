#pragma once
#include "IEnemyAttacker.h"

class EnemyTank: public IEnemyAttacker
{
private:
	int upperDamageLimit = 10;
	int movementLimit = 5;
public:
	void fireWeapon();
	void driveForward();
	void assignDriver(std::string driverName);
};


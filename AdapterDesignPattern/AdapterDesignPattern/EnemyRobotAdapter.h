#pragma once
#include "IEnemyAttacker.h"
#include "EnemyRobot.h"
class EnemyRobotAdapter : public IEnemyAttacker
{
private:
	EnemyRobot* theRobot;
public:
	EnemyRobotAdapter(EnemyRobot* newRobot);
	void fireWeapon();
	void driveForward();
	void assignDriver(std::string driverName);
};


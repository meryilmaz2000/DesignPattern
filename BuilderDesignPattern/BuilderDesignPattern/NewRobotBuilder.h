#pragma once
#include "IRobotBuilder.h"
class NewRobotBuilder : public IRobotBuilder
{
private:
	Robot* robot;
public:
	NewRobotBuilder(); //Constructor
	void buildRobotHead();
	void buildRobotTorso();
	void buildRobotArms();
	void buildRobotLegs();
	Robot* getRobot();
};


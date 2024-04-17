#pragma once
#include "IRobotBuilder.h"
#include "Robot.h"
class OldRobotBuilder : public IRobotBuilder
{
private:
	Robot *robot;
public:
	OldRobotBuilder(); //Constructor
	void buildRobotHead();
	void buildRobotTorso();
	void buildRobotArms();
	void buildRobotLegs();
	Robot* getRobot();
};


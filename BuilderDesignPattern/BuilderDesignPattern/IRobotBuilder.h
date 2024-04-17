#pragma once
#include "Robot.h"
class IRobotBuilder {
public:
	IRobotBuilder();
	virtual void buildRobotHead() = 0;
	virtual void buildRobotTorso() = 0;
	virtual void buildRobotArms() = 0;
	virtual void buildRobotLegs() = 0;
	virtual Robot* getRobot() = 0;

};

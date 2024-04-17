#pragma once
#include "IRobotBuilder.h"
#include "Robot.h"
class RobotEngineer
{
private :
	IRobotBuilder *robotBuilder; //We can create an "pointer" instantiate from abstract class
public:
	RobotEngineer(IRobotBuilder *builder);
	Robot* getRobot();
	void makeRobot();
};


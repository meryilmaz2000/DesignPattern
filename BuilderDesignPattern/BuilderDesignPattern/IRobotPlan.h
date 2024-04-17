#pragma once
#include <iostream>

class IRobotPlan
{
public:
	virtual void setRobotHead(std::string head) = 0;
	virtual void setRobotTorso(std::string torso) = 0;
	virtual void setRobotArms(std::string arms) = 0;
	virtual void setRobotLegs(std::string legs) = 0;
};


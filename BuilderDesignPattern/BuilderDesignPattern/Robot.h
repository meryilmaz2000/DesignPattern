#pragma once
#include "IRobotPlan.h"
class Robot: public IRobotPlan
{
private:
	std::string robotHead;
	std::string robotTorso;
	std::string robotArms;
	std::string robotLegs;

public:
	void setRobotHead(std::string head);
	void setRobotTorso(std::string torso);
	void setRobotArms(std::string arms);
	void setRobotLegs(std::string legs);

	std::string getRobotHead();
	std::string getRobotTorso();
	std::string getRobotArms();
	std::string getRobotLegs();
};


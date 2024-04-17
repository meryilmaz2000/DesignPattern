#include "RobotEngineer.h"

RobotEngineer::RobotEngineer(IRobotBuilder* builder) {
	this->robotBuilder = builder;
}
Robot* RobotEngineer::getRobot() {
	return this->robotBuilder->getRobot();
}
void RobotEngineer::makeRobot() {
	this->robotBuilder->buildRobotHead();
	this->robotBuilder->buildRobotArms();
	this->robotBuilder->buildRobotTorso();
	this->robotBuilder->buildRobotLegs();
}
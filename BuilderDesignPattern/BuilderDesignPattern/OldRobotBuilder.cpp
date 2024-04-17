#include "OldRobotBuilder.h"

OldRobotBuilder::OldRobotBuilder() {
	this->robot = new Robot();
}

void OldRobotBuilder::buildRobotHead() {
	robot->setRobotHead("Tin Head");
}
void OldRobotBuilder::buildRobotTorso() {
	robot->setRobotTorso("Tin Torso");
}
void OldRobotBuilder::buildRobotArms() {
	robot->setRobotArms("Blowtorch Arms");
}
void OldRobotBuilder::buildRobotLegs() {
	robot->setRobotLegs("Roller Skates");
}
Robot* OldRobotBuilder::getRobot() {
	return this->robot;
}
#include "NewRobotBuilder.h"

NewRobotBuilder::NewRobotBuilder() {
	this->robot = new Robot();
}
void NewRobotBuilder::buildRobotHead(){
	robot->setRobotHead("Steel Head");
}
void NewRobotBuilder::buildRobotTorso(){
	robot->setRobotTorso("Steel Torso");
}
void NewRobotBuilder::buildRobotArms(){
	robot->setRobotArms("New Tech Robot Arm");
}
void NewRobotBuilder::buildRobotLegs(){
	robot->setRobotLegs("New Tech Robot Leg");
}
Robot* NewRobotBuilder::getRobot(){
	return this->robot;
}
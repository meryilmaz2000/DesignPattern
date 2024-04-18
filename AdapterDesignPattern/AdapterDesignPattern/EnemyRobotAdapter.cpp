#include "EnemyRobotAdapter.h"

EnemyRobotAdapter::EnemyRobotAdapter(EnemyRobot* newRobot) {
	this->theRobot = newRobot;
}
void EnemyRobotAdapter::fireWeapon() {
	theRobot->smashWithHands();
}
void EnemyRobotAdapter::driveForward(){
	theRobot->walkForward();
}
void EnemyRobotAdapter::assignDriver(std::string driverName){
	theRobot->reactToHuman(driverName);
}
#include "Robot.h"

void Robot::setRobotHead(std::string head){
	this->robotHead = head;
}
void Robot::setRobotTorso(std::string torso) {
	this->robotTorso = torso;
}
void Robot::setRobotArms(std::string arms) {
	this->robotArms = arms;
}
void Robot::setRobotLegs(std::string legs) {
	this->robotLegs = legs;
}
std::string Robot::getRobotHead(){
	return this->robotHead;
}
std::string Robot::getRobotTorso(){
	return this->robotTorso;
}
std::string Robot::getRobotArms(){
	return this->robotArms;
}
std::string Robot::getRobotLegs(){
	return this->robotLegs;
}
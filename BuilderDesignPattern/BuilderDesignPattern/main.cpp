#include <iostream>
#include "Robot.h"
#include "OldRobotBuilder.h"
#include "NewRobotBuilder.h"
#include "RobotEngineer.h"
using namespace std;
void showInfo(Robot* robot) {
	cout << "-----\nRobot Built : " << endl;
	cout << "Head Type  : " << robot->getRobotHead() << endl;
	cout << "Torso Type : " << robot->getRobotTorso() << endl;
	cout << "Arm Type   : " << robot->getRobotArms() << endl;
	cout << "Leg Type   : " << robot->getRobotLegs() << endl;
	cout << "-----" << endl;
}
int main() {
	IRobotBuilder* oldStyleBuilder = new OldRobotBuilder();
	IRobotBuilder* newStyleBuilder = new NewRobotBuilder();
	RobotEngineer* engineer = new RobotEngineer(oldStyleBuilder);
	RobotEngineer* engineer2 = new RobotEngineer(newStyleBuilder);
	engineer->makeRobot();
	engineer2->makeRobot();
	Robot* firstRobot = engineer->getRobot();
	Robot* secondRobot = engineer2->getRobot();
	showInfo(firstRobot);
	showInfo(secondRobot);

	system("pause>0");
	return 0;
}
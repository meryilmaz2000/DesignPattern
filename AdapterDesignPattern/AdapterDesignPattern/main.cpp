#include <iostream>
#include "EnemyRobot.h"
#include "EnemyTank.h"
#include "EnemyRobotAdapter.h"
using namespace std;

int main() {
	EnemyTank* tank1 = new EnemyTank();
	EnemyRobot* robot1 = new EnemyRobot();

	cout << "----TANK----" << endl;
	tank1->assignDriver("Jonathan");
	tank1->driveForward();
	tank1->fireWeapon();

	EnemyRobotAdapter* adapter = new EnemyRobotAdapter(robot1);

	cout << "----ROBOT----" << endl;
	robot1->reactToHuman("Paul");
	robot1->walkForward();
	robot1->smashWithHands();

	cout << "----ROBOT WITH ADAPTER----" << endl;
	adapter->assignDriver("Mark");
	adapter->driveForward();
	adapter->fireWeapon();

	return 0;
}
#pragma once
//This is a different class which does not implement IEnemyAttacker directly. It needs an adapter.
#include <iostream>
class EnemyRobot 
{
private:
	int damageLimit = 6;
	int movementLimit = 10;
public:
	void smashWithHands();
	void walkForward();
	void reactToHuman(std::string driverName);
};


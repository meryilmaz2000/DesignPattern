#pragma once
#include "EnemyShip.h"

class RocketEnemyShip:public EnemyShip
{
private:
	static int totalRocketEnemyShipNumber;
public:
	RocketEnemyShip();
	int getID();
};


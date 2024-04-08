#pragma once
#include "EnemyShip.h"

class UFOEnemyShip :public EnemyShip
{
private:
	static int totalUFOEnemyShipNumber;
public:
	UFOEnemyShip();
	int getID();
};


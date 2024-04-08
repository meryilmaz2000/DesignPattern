#pragma once
#include "EnemyShip.h"
class BigUFOEnemyShip:public EnemyShip
{
private:
	static int totalBigUFOEnemyShipNumber;
public:
	BigUFOEnemyShip();
	int getID();
};


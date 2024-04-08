#pragma once
#include "EnemyShip.h"
#include "BigUFOEnemyShip.h"
#include "UFOEnemyShip.h"
#include "RocketEnemyShip.h"

class EnemyShipFactory
{
private:
	static int totalShipCreated;
public:
	EnemyShip* makeEnemyShip(int shipNumber);
};


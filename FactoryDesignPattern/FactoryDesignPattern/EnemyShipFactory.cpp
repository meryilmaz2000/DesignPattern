#include "EnemyShipFactory.h"

int EnemyShipFactory::totalShipCreated = 0;

EnemyShip* EnemyShipFactory::makeEnemyShip(int shipNumber) {
	totalShipCreated++;
	EnemyShip* newEnemy = nullptr;
	if (shipNumber == 1) {
		newEnemy = new UFOEnemyShip();
	}
	else if (shipNumber == 2) {
		newEnemy = new BigUFOEnemyShip();
	}
	else if (shipNumber == 3) {
		newEnemy = new RocketEnemyShip();
	}
	cout << "Created ship number : " << totalShipCreated << endl;
	cout << "ID Number of last created " << newEnemy->getName() << " : " << newEnemy->getID() << endl;
	return newEnemy;
}
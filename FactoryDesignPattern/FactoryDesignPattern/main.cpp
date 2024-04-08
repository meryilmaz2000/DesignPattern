#include <iostream>
#include "EnemyShip.h"
#include "EnemyShipFactory.h"

using namespace std;

static void doStuffEnemy(EnemyShip* enemy) {
	enemy->displayEnemyShip();
	enemy->followHeroShip();
	enemy->enemyShipShoots();
}


int main() {
	EnemyShipFactory *factory = new EnemyShipFactory();

	int inputNumber;
	while (true) {
		cout << "What type of ship? \n(UFO -> 1 , BIG UFO -> 2 ROCKET -> 3) :" << endl;
		cin >> inputNumber;
		if (inputNumber == 1 || inputNumber == 2 || inputNumber == 3) {
			doStuffEnemy(factory->makeEnemyShip(inputNumber));
		}
		else {
			cout << "Invalid input parameter !" << endl;
		}
	}
	return 0;
}


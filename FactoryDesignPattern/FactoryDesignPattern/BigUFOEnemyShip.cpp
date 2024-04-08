#include "BigUFOEnemyShip.h"

int BigUFOEnemyShip::totalBigUFOEnemyShipNumber = 0;

BigUFOEnemyShip::BigUFOEnemyShip(){ 
	this->setName("Big UFO Enemy Ship");
	this->setDamage(40.0);
	totalBigUFOEnemyShipNumber++;
}

int BigUFOEnemyShip::getID() {
	return this->totalBigUFOEnemyShipNumber;
}
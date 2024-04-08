#include "UFOEnemyShip.h"

int UFOEnemyShip::totalUFOEnemyShipNumber = 0;

UFOEnemyShip::UFOEnemyShip() {
	this->setName("UFO Enemy Ship");
	this->setDamage(20.0);
	this->totalUFOEnemyShipNumber++;
}

int UFOEnemyShip::getID() {
	return this->totalUFOEnemyShipNumber;
}
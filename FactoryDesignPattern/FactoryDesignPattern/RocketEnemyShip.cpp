#include "RocketEnemyShip.h"

int RocketEnemyShip::totalRocketEnemyShipNumber = 0;

RocketEnemyShip::RocketEnemyShip() {
	this->setName("Rocket Enemy Ship");
	this->setDamage(10.0);
	this->totalRocketEnemyShipNumber++;
}

int RocketEnemyShip::getID() {
	return this->totalRocketEnemyShipNumber;
}          

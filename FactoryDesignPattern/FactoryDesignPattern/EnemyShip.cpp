#include "EnemyShip.h"

string EnemyShip::getName(){
	return this->name;
}
void EnemyShip::setName(string newName){
	this->name = newName;
}
double EnemyShip::getDamage(){
	return this->amtDamage;
}
void EnemyShip::setDamage(double newDamage){
	this->amtDamage = newDamage;
}
void EnemyShip::followHeroShip() {
	cout << this->getName() << " is following the hero !" << endl;
}
void EnemyShip::displayEnemyShip() {
	cout << this->getName() << " is on screen" << endl;
}
void EnemyShip::enemyShipShoots() {
	cout << this->getName() << " attacks and does " << this->getDamage() << endl;
}

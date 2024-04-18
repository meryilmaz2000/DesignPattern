#include "EnemyTank.h"

void EnemyTank::fireWeapon(){
	int attackDamage = (rand() % upperDamageLimit) + 1;
	std::cout << "Enemy Tank does " << attackDamage << " Damage !" << std::endl;
}
void EnemyTank::driveForward(){
	int movement = (rand() % movementLimit) + 1;
	std::cout << "Enemy Tank moves " << movement << " space !" << std::endl;
}
void EnemyTank::assignDriver(std::string driverName){
	std::cout << driverName << "is driving the tank !" << std::endl;
}
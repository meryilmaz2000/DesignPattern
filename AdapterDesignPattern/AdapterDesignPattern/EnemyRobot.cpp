#include "EnemyRobot.h"

void EnemyRobot::smashWithHands() {
	int attackDamage = (rand() % damageLimit) + 1;
	std::cout << "Enemy robot causes " << attackDamage << " Damage with Its Hands !" << std::endl;
}
void EnemyRobot::walkForward() {
	int movement = (rand() % movementLimit) + 1;
	std::cout << "Enemy robot walks forward " << movement << " Spaces!" << std::endl;
}
void EnemyRobot::reactToHuman(std::string driverName){
	std::cout << "Enemy robot tramps on " << driverName << std::endl;
}
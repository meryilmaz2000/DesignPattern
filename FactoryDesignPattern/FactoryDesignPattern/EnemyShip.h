#pragma once
#include <iostream>

using namespace std;

class EnemyShip
{
private:
	string name;
	double amtDamage;
public:
	virtual string getName();
	virtual void setName(string newName);
	virtual double getDamage();
	virtual void setDamage(double newDamage);
	virtual void followHeroShip();
	virtual void displayEnemyShip();
	virtual void enemyShipShoots();
	virtual int getID() = 0;
};


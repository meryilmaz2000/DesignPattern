#pragma once
#include <iostream>
#include "Flys.h"
#include "CantFly.h"
#include "ItFlys.h"

using namespace std;

class Animal
{
private:
	string name;
	double height;
	int weight;
	string favfood;
	double speed;
	string sound;
protected:
	Flys *flyingTpye;
public:
	Animal(string name, double height , int weight);
	void setName(string newName);
	string getName();
	void setHeight(double newHeight);
	double getHeight();
	void setWeight(int newWeight);
	int getWeight();
	void setFavFood(string newFavFood);
	string getFavFood();
	void setSpeed(double newSpeed);
	double getSpeed();
	void setSound(string newSound);
	string getSound();
	string tryToFly();
	void setFlyingAbility(Flys *newType);
};


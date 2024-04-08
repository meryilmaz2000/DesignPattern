#include "Animal.h"

Animal::Animal(string name, double height, int weight) {
	this->name = name;
	this->height = height;
	this->weight = weight;
	cout << "Animal Constructor called" << endl;
}
void Animal::setName(string newName) {
	this->name = newName;
}
string Animal::getName() {
	return this->name;
}
void Animal::setHeight(double newHeight) {
	if (newHeight > 0) {
		this->height = newHeight;
	}
	else {
		cout << "Invalid parameter" << endl;
	}
}
double Animal::getHeight() {
	return this->height;
}
void Animal::setWeight(int newWeight) {
	if (newWeight > 0) {
		this->weight = newWeight;
	}
	else {
		cout << "Invalid parameter" << endl;
	}
}
int Animal::getWeight() {
	return this->weight;
}
void Animal::setFavFood(string newFavFood) {
	this->favfood = newFavFood;
}
string Animal::getFavFood() {
	return this->favfood;
}
void Animal::setSpeed(double newSpeed) {
	this->speed = newSpeed;
}
double Animal::getSpeed() {
	return this->speed;
}
void Animal::setSound(string newSound) {
	this->sound = newSound;
}
string Animal::getSound() {
	return this->sound;
}
string Animal::tryToFly() {
	return this->flyingTpye->fly();
}
void Animal::setFlyingAbility(Flys *newType) {
	this->flyingTpye = newType;
}
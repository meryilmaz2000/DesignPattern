#include "Bird.h"

Bird::Bird(string name, double height, int weight):Animal(name, height, weight) {
	setSound("Tweet");
	flyingTpye = new ItFlys();
}
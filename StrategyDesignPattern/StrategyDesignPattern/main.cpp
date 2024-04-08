#include <iostream>
#include "Dog.h"
#include "Bird.h"
#include "Animal.h"

using namespace std;

int main() {
	Animal *sparky = new Dog("Sparky",130,34);
	Animal* tweety = new Bird("Tweety",22,1);

	cout << sparky->getName() << " : " << sparky->tryToFly() << endl;
	cout << tweety->getName() << " : " << tweety->tryToFly() << endl;

	sparky->setFlyingAbility(new ItFlys());
	cout << sparky->getName() << " : " << sparky->tryToFly() << endl;


	system("pause>0");
	return 0;
}
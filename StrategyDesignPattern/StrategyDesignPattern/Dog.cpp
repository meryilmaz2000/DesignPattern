#include "Dog.h"

Dog::Dog(string name, double height, int weight):Animal(name,height,weight) {
	setSound("Bark");
	flyingTpye = new CantFly();
}
void Dog::digHole() {
	cout << "Dug a hole ! " << endl;
}

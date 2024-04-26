#include "Mozzarella.h"



Mozzarella::Mozzarella(Pizza* newPizza) : ToppingDecorator(newPizza) {
	std::cout << "Adding dough !" << std::endl;
	std::cout << "Adding Moz !" << std::endl;
}

std::string Mozzarella::getDescription() {
	return tempPizza->getDescription() + ", Mozzarella";
}
double Mozzarella::getCost(){
	return tempPizza->getCost() + 0.50;
}
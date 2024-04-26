#include "ToppingDecorator.h"

ToppingDecorator::ToppingDecorator(Pizza* newPizza){
	this->tempPizza = newPizza;
}
std::string ToppingDecorator::getDescription() {
	return this->tempPizza->getDescription();
}
double ToppingDecorator::getCost() {
	return this->tempPizza->getCost();

}
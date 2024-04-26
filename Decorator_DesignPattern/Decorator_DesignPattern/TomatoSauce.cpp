#include "TomatoSauce.h"

TomatoSauce::TomatoSauce(Pizza* newPizza) : ToppingDecorator(newPizza){
	std::cout << "Adding Sauce" << std::endl;
}
std::string TomatoSauce::getDescription(){
	return this->tempPizza->getDescription() + ", Tomato Sauce";
}
double TomatoSauce::getCost(){
	return this->tempPizza->getCost() + 0.35;
}
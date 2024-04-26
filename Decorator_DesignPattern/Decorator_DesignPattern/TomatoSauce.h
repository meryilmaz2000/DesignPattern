#pragma once
#include "ToppingDecorator.h"
class TomatoSauce : public ToppingDecorator
{
public:
	TomatoSauce(Pizza* newPizza);
	std::string getDescription();
	double getCost();

};
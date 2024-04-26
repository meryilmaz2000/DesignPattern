#pragma once
#include "ToppingDecorator.h"
class Mozzarella : public ToppingDecorator
{
public:
	Mozzarella(Pizza *newPizza);
	std::string getDescription();
	double getCost();

};


#pragma once

#include "Pizza.h"

class ToppingDecorator : public Pizza
{
protected:
	Pizza* tempPizza;
public:
	ToppingDecorator(Pizza *newPizza); //we need to add pizza pointer continuously to create decorator object.
	virtual std::string getDescription() override;
	virtual double getCost() override;

};


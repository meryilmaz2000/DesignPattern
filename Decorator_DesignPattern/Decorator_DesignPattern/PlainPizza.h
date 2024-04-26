#pragma once
#include "Pizza.h"
class PlainPizza : public Pizza
{
public:
	std::string getDescription() override;
	double getCost() override;
};


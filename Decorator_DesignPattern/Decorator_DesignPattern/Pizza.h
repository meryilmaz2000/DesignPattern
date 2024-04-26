#pragma once
#include <iostream>
class Pizza
{
public:
	virtual std::string getDescription() = 0;
	virtual double getCost() = 0;
};


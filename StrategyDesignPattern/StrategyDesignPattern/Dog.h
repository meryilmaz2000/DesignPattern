#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(string name, double height, int weight);
	void digHole();
};


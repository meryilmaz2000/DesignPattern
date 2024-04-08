#pragma once
#include <iostream>
using namespace std;

class Observer {
public:
	virtual void update(double ibmPrice, double aaplPrice, double googPrice) = 0;
};
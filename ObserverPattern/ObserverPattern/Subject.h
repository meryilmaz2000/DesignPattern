#pragma once
#include "Observer.h"
#include <iostream>
using namespace std;

//Observable side abstract class
class Subject {
public : 
	virtual void registerNewObserver(Observer *observer) = 0;
	virtual void unregister(Observer *observer) = 0;
	virtual void notifyObserver() = 0;

};

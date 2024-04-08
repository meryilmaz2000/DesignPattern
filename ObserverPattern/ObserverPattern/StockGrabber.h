#pragma once
#include "Subject.h"
#include <list>
using namespace std;

class StockGrabber:public Subject
{
private:
	list<Observer*> observerList;
	double ibmPrice;
	double googPrice;
	double aaplPrice;
public:
	StockGrabber();
	void registerNewObserver(Observer* observer);
	void unregister(Observer* observer);
	void notifyObserver();
	void setIBMPrice(double newPrice);
	void setGoogPrice(double newPrice);
	void setAaplPrice(double newPrice);
};


#pragma once
#include "Observer.h"
#include "Subject.h"

class StockObserver:public Observer
{
private:
	double ibmP;
	double aaplP;
	double googP;
	static int observerIDTracker;
	int observerID;
	Subject *stockGrabber;
public:
	StockObserver(Subject *stockGrab);
	void update(double ibmPrice, double aaplPrice, double googPrice);
	void printPrices();
};


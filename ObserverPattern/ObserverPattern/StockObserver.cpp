#include "StockObserver.h"

int StockObserver::observerIDTracker = 0; //static data is initialized

StockObserver::StockObserver(Subject* stockGrab) {
	this->stockGrabber = stockGrab;
	this->observerID = ++observerIDTracker;
	cout << "New Observer created..." << this->observerID << endl;
	stockGrabber->registerNewObserver(this);
}

void StockObserver::update(double ibmPrice, double aaplPrice, double googPrice) {
	this->ibmP = ibmPrice;
	this->googP = googPrice;
	this->aaplP = aaplPrice;

	printPrices();
}

void StockObserver::printPrices() {
	cout << "Observer ID : " << observerID << endl;
	cout << "IBM  Price : " << ibmP  << "$" << endl;
	cout << "AAPL Price : " << aaplP << "$" << endl;
	cout << "GOOG Price : " << googP << "$" << endl;
}


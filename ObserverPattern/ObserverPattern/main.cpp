#include <iostream>
#include "StockGrabber.h"
#include "StockObserver.h"
using namespace std;

int main() {
	StockGrabber *stockGrabber1 = new StockGrabber();
	StockObserver* stockObserver1 = new StockObserver(stockGrabber1);

	stockGrabber1->setIBMPrice(312.33);
	stockGrabber1->setGoogPrice(921.99);
	stockGrabber1->setAaplPrice(109.12);

	StockObserver* stockObserver2 = new StockObserver(stockGrabber1);

	stockGrabber1->setIBMPrice(15.33);
	stockGrabber1->setGoogPrice(76.99);
	stockGrabber1->setAaplPrice(33.12);

	return 0;
}
#include "StockGrabber.h"

//It is a class from Observable side

StockGrabber::StockGrabber(){
	cout << "StockGrabber from Subject is created." << endl;
}
void StockGrabber::registerNewObserver(Observer* observer){
	observerList.push_back(observer);
	cout << "Added..." << endl;
}
void StockGrabber::unregister(Observer* observer){
	observerList.erase(find(observerList.begin(), observerList.end(), observer));
	cout << "Deleted..." << endl;
}
void StockGrabber::notifyObserver(){
	for (Observer* obs : observerList) {
		obs->update(ibmPrice, aaplPrice, googPrice);
	}
}
void StockGrabber::setIBMPrice(double newPrice) {
	this->ibmPrice = newPrice;
	notifyObserver();
}
void StockGrabber::setGoogPrice(double newPrice) {
	this->googPrice = newPrice;
	notifyObserver();
}
void StockGrabber::setAaplPrice(double newPrice) {
	this->aaplPrice = newPrice;
	notifyObserver();
}
#include <iostream>
#include "TomatoSauce.h"
#include "Mozzarella.h"
#include "PlainPizza.h"
#include "Pizza.h"
using namespace std;

int main() {
	Pizza* type1Pizza = new TomatoSauce(new Mozzarella(new PlainPizza()));
	cout << "TYPE -1 PIZZA : " << endl;
	cout << "Ingredients : " << type1Pizza->getDescription() << endl;
	cout << "Cost : " << type1Pizza->getCost() << " $" << endl;
	Pizza* type2Pizza = new PlainPizza();
	cout << "TYPE -2 PIZZA : " << endl;
	cout << "Ingredients : " << type2Pizza->getDescription() << endl;
	cout << "Cost : " << type2Pizza->getCost() << " $" << endl;



	return 0;
}
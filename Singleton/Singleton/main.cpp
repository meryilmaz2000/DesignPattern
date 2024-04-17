#include <iostream>
#include "Singleton.h"

using namespace std;

int main() {
	Singleton* s;
	cout << "1- Get Instance Function called!" << endl;
	s = s->getInstance();
	cout << "2- Get Instance Function called!" << endl;
	s = s->getInstance();
	cout << "3- Get Instance Function called!" << endl;
	s = s->getInstance();
	return 0;
}
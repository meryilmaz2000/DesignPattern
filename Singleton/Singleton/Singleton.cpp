#include "Singleton.h"
#include <iostream>
Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
	printf("Constructor called !\n");
}

Singleton* Singleton::getInstance() {
	if (instance == nullptr) {
		printf("Newly Created !\n");
		instance = new Singleton();
	}
	else {
		printf("Old Created used !\n");
	}
	return instance;

}
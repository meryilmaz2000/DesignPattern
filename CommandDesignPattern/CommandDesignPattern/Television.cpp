#include "Television.h"

void Television::on() {
	std::cout << "TV is ON!" << std::endl;
}
void Television::off(){
	std::cout << "TV is OFF!" << std::endl;
}
void Television::volumeUp(){
	if (volume < 10) {
		volume++;
	}
	std::cout << "TV Volume is at "<< volume << std::endl;
}
void Television::volumeDown() {
	if (volume >= 1) {
		volume--;
	}
	std::cout << "TV Volume is at " << volume << std::endl;
}
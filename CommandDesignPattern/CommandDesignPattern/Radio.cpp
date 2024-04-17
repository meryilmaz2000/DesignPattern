#include "Radio.h"

void Radio::on(){
	std::cout << "Radio is ON!" << std::endl;
}
void Radio::off(){
	std::cout << "Radio is OFF!" << std::endl;
}
void Radio::volumeUp(){
	if (volume < 5) {
		volume++;
	}
	std::cout << "Radio Volume is at " << volume << std::endl;
}
void Radio::volumeDown(){
	if (volume >= 1) {
		volume--;
	}
	std::cout << "Radio Volume is at " << volume << std::endl;

}
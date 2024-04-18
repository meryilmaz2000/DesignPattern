#include <iostream>
#include "BankAccountFacade.h"
using namespace std;

int main() {

	BankAccountFacade* accessingBank = new BankAccountFacade(12345678, 1234);
	accessingBank->withdrawCash(50);
	accessingBank->withdrawCash(1000);
	accessingBank->depositCash(400);
	accessingBank->withdrawCash(1000);

	return 0;
}
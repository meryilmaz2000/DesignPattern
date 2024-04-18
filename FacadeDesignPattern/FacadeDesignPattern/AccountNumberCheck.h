#pragma once
class AccountNumberCheck
{
private:
	int accountNumber = 12345678;
public:
	int getAccountNumber();
	bool accountActive(int accountNumberToCheck);
};


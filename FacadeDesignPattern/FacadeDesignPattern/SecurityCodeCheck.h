#pragma once
class SecurityCodeCheck
{
private:
	int securityCode = 1234;
public:
	int getSecurityCode();
	bool checkSecurityCode(int secCodeToCheck);
};


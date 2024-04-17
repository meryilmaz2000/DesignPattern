#pragma once
class Singleton
{
private:
	Singleton(); //Constructor is private. So we cannot call it outside from the class.
	static Singleton* instance;

public:
	static Singleton* getInstance();
};


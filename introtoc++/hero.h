#pragma once
#include <string>

class MyHero
{
private:
	int _health = 100;
	int _attackVal = 10;
	std::string name = "name";
public:
	void Fight(MyHero hero);
	void takeDamage();
};



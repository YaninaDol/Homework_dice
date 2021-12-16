#pragma once
#include <iostream>

class Dice
{
private:
	int number;
public:
	Dice();
	Dice(int a);

	friend std::ostream& operator<<(std::ostream& out, const Dice& d);
	int getNumber();

};



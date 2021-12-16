#include "Dice.h"

Dice::Dice()
{
	this->number = 0;
}

Dice::Dice(int a)
{
	if (a <= 6)
	{
		this->number = a;
	}
	else this->number = 1;
}

int Dice::getNumber()
{
	return this->number;
}

std::ostream& operator<<(std::ostream& out, const Dice& d)
{
	out << " number: " << d.number << "\n";
	return out;
}



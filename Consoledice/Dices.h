#pragma once
#include <iostream>
#include "Dice.h"

class Dices
{
private:
	Dice* mas;
	int size;
public:
	Dices();
	Dices(int size);
	Dice& operator[](const int index);
	
	void iniz();
	int all_sum();
	friend std::ostream& operator<<(std::ostream& out, Dices& mas);
};

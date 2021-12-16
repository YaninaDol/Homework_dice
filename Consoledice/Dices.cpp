#include "Dices.h"

Dices::Dices()
{
	this->mas = nullptr;
	this->size = 0;
}

Dices::Dices(int size)
{
	if (size > 0)
    {
	this->mas = new Dice[size];
	this->size = size;
    }
	else
	{
		std::cout << "Erorr";
		this->mas = nullptr;
		this->size = 0;
	}

}

Dice& Dices::operator[](const int index)
{
	return this->mas[index];
}

void Dices::iniz()
{
	for (int i = 0; i < size; i++)
	{
		int a = 1 + rand() % 7;
		mas[i] = Dice(a);
	}
}

int Dices::all_sum()
{
	int sum = 0;
	for (int i = 0; i < this->size; i++)
	{
		sum = sum + this->mas[i].getNumber();
	}
	return sum;
}

std::ostream& operator<<(std::ostream& out, Dices& mas)
{
	if (mas.size > 0)
	{
		for (int i = 0; i < mas.size; i++)
		{
			out << mas[i]<< "\n";
		}
		return out;
	}
	else std::cout << "Erorr";
}

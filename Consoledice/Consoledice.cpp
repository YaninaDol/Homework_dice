#include <iostream>
#include "Dices.h"

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int size;
	std::cout << " ������� ���������� ������ :";
	std::cin >> size;
	Dices play(size);
	play.iniz();
	std::cout << play;

	int sum;
	sum = play.all_sum();
	std::cout << " ����� ����� ������ : "<<sum<<"\n";

}


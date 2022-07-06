// S_H_1.cpp :
//
#include "S_H_01.h"
#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int x1 = 0; int x2 = 0; int action = 0; double res = 0;
	std::cout << "Введите первое число:" << std::endl;
	std::cin >> x1;
	std::cout << "Введите второе число:" << std::endl;
	std::cin >> x2;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): " << std::endl;
	std::cin >> action;
	
	if (x2 == 0 && action == 4)
	{
		std::cout << "ERROR " << "деление на: 0 " << std::endl;
		return -1;
	}

	switch (action)
	{
	case 1:
	{
		res = sum(x1, x2);

		result(res);
		break;
	}
	case 2:
	{
		res = sub(x1, x2);

		result(res);
		break;
	}
	case 3:
	{
		res = mult(x1, x2);

		result(res);
		break;

	}
	case 4:
	{
		res = dev(x1, x2);

		result(res);
		break;

	}
	case 5:
	{
		res = deg(x1, x2);

		result(res);
		break;

	}

	default:
		break;
	}
	
}



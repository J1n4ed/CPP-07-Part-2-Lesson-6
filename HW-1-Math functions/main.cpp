// main.cpp

/*
  06.02.2023
  Тема 2, Занятие 6
  Работа 1, Математические функции
  CPP-07
  @j1n4ed
*/

#include "src/mathfunc.h"
#include <iostream>
#include <Windows.h>

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// --------------------------

	double numX = 0, numY = 0;
	int operation = 0;

	std::cout << "Введите число X (double): ";
	std::cin >> numX;
	std::cout << "Введите число Y (double): ";
	std::cin >> numY;
	
	std::cout << "Выберите операцию (int) (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 6 - все операции): ";
	std::cin >> operation;

	switch (operation)
	{
	case 1:
		std::cout << "Результат: " << numX << " + " << numY << " = " << jinx::do_plus(numX, numY);
		std::cout << std::endl;
		break;
	case 2:
		std::cout << "Результат: " << numX << " - " << numY << " = " << jinx::do_minus(numX, numY);
		std::cout << std::endl;
		break;
	case 3:
		std::cout << "Результат: " << numX << " * " << numY << " = " << jinx::do_power(numX, numY);
		std::cout << std::endl;
		break;
	case 4:
		std::cout << "Результат: " << numX << " / " << numY << " = " << jinx::do_division(numX, numY);
		std::cout << std::endl;
		break;
	case 5:
		std::cout << "Результат: " << numX << " в степени " << numY << " = " << jinx::do_sqr(numX, numY);
		std::cout << std::endl;
		break;
	case 6:
		std::cout << "Результат: " << numX << " + " << numY << " = " << jinx::do_plus(numX, numY);
		std::cout << std::endl;
		std::cout << "Результат: " << numX << " - " << numY << " = " << jinx::do_minus(numX, numY);
		std::cout << std::endl;
		std::cout << "Результат: " << numX << " * " << numY << " = " << jinx::do_power(numX, numY);
		std::cout << std::endl;
		std::cout << "Результат: " << numX << " / " << numY << " = " << jinx::do_division(numX, numY);
		std::cout << std::endl;
		std::cout << "Результат: " << numX << " в степени " << numY << " = " << jinx::do_sqr(numX, numY);
		std::cout << std::endl;
		break;
		
	default:
		std::cout << "Неправильный ввод!";
		break;
	}
	
	// clean & exit
	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}
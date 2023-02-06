// main.cpp

/*
  06.02.2023
  ���� 2, ������� 6
  ������ 1, �������������� �������
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

	std::cout << "������� ����� X (double): ";
	std::cin >> numX;
	std::cout << "������� ����� Y (double): ";
	std::cin >> numY;
	
	std::cout << "�������� �������� (int) (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������, 6 - ��� ��������): ";
	std::cin >> operation;

	switch (operation)
	{
	case 1:
		std::cout << "���������: " << numX << " + " << numY << " = " << jinx::do_plus(numX, numY);
		std::cout << std::endl;
		break;
	case 2:
		std::cout << "���������: " << numX << " - " << numY << " = " << jinx::do_minus(numX, numY);
		std::cout << std::endl;
		break;
	case 3:
		std::cout << "���������: " << numX << " * " << numY << " = " << jinx::do_power(numX, numY);
		std::cout << std::endl;
		break;
	case 4:
		std::cout << "���������: " << numX << " / " << numY << " = " << jinx::do_division(numX, numY);
		std::cout << std::endl;
		break;
	case 5:
		std::cout << "���������: " << numX << " � ������� " << numY << " = " << jinx::do_sqr(numX, numY);
		std::cout << std::endl;
		break;
	case 6:
		std::cout << "���������: " << numX << " + " << numY << " = " << jinx::do_plus(numX, numY);
		std::cout << std::endl;
		std::cout << "���������: " << numX << " - " << numY << " = " << jinx::do_minus(numX, numY);
		std::cout << std::endl;
		std::cout << "���������: " << numX << " * " << numY << " = " << jinx::do_power(numX, numY);
		std::cout << std::endl;
		std::cout << "���������: " << numX << " / " << numY << " = " << jinx::do_division(numX, numY);
		std::cout << std::endl;
		std::cout << "���������: " << numX << " � ������� " << numY << " = " << jinx::do_sqr(numX, numY);
		std::cout << std::endl;
		break;
		
	default:
		std::cout << "������������ ����!";
		break;
	}
	
	// clean & exit
	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}
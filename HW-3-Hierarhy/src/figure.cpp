// figure.cpp

/*
��������� �������
*/

#include "figure.h"
#include <iostream>

/*
vprint
*/
void jinx::Figure::print_figure()
{
	std::cout << this->figureName_;
}

/*
����� ����� ������
*/
std::string jinx::Figure::get_figure_name()
{
	return this->figureName_;
}
/*
��������� �������
*/

#include "triangle.h"
#include <iostream>

/*

�����������:
�������: a=10 b=20 c=30
����: A=50 B=60 C=70

*/
void jinx::Triangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';
	std::cout << "�������: � = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << '\n';
	std::cout << "����: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << std::endl;
}
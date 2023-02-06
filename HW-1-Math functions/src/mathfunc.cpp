// mathfunc.cpp

#include "mathfunc.h"
#include <iostream>

/* ------------------------------------ //
функция сложения двух чисел
*/
double jinx::do_plus(double numX, double numY)
{
	return numX + numY;
} // END OF do_plus(T numX, T numY)

/* ------------------------------------ //
функция вычитания двух чисел
*/
double jinx::do_minus(double numX, double numY)
{
	return numX - numY;
} // END OF do_minus(T numX, T numY)

/* ------------------------------------ //
функция умножения двух чисел
*/
double jinx::do_power(double numX, double numY)
{
	return numX * numY;
} // END OF do_power(T numX, T numY)

/* ------------------------------------ //
функция деления двух чисел
*/
double jinx::do_division(double numX, double numY)
{
	if (numY != 0)
	{
		return numX / numY;
	}
	else
	{
		std::cerr << "DIVISION BY 0!";
		return 1;
	}
} // END OF do_division(T numX, T numY)

/* ------------------------------------ //
функция возведение в степень n
*/
double jinx::do_sqr(double numX, double numY)
{
	double resultNum = numX;

	for (int i = 1; i <= numY; ++i)
	{
		resultNum *= numX;
	}

	return resultNum;
} // END OF do_sqr(T numX, int n)
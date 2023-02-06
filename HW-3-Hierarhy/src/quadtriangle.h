// quadtriangle.h

#pragma once

#include "triangle.h"
#include <string>

namespace jinx
{
	/*
	������������� �����������
	*/
	class QuadTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		QuadTriangle() = delete;

		QuadTriangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle(figureName, side_a, side_b, side_c, angle_A, angle_B, 90)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class QuadTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx
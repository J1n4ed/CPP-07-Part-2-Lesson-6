// equalizedtriangle.h

#pragma once

#include "equalsidedtriangle.h"
#include <string>

namespace jinx
{
	/*
	�������������� �����������
	*/
	class EqualizedTriangle : public EqualSidedTriangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		EqualizedTriangle() = delete;

		EqualizedTriangle(std::string figureName, int side_a, int angle_A) : EqualSidedTriangle(figureName, side_a, side_a, angle_A, angle_A)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualizedTriangle // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx
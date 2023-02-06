// square.h

#pragma once

#include "twosidesquare.h"
#include <string>

namespace jinx
{
	/*
	�������
	*/
	class Square : public TwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		Square() = delete;

		Square(std::string figureName, int side_a) : TwoSideSquare(figureName, side_a, side_a)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class Square // ---------------------------------------------------------------------------------------------------------------- //
} // END OF jinx
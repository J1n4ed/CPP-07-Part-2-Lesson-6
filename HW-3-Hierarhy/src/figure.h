// figures_2.h

/*
������������ ���� ������
*/

#ifndef FIGURES2H
#define FIGURES2H

#include <string>

namespace jinx
{
	/*
	������� ����� ������
	*/
	class Figure // ---------------------------------------------------------------------------------------------------------------- //
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		/*
		vprint
		*/
		virtual void print_figure();

		/*
		����� ����� ������
		*/
		std::string get_figure_name();

		// ������������ ------------------------------------------- //

		/*
		����������� �� ���������
		�����
		*/
		Figure() = delete;

		/*
		����������� � �����������
		�� ���� int ���������� ������
		� string �������� ������
		*/
		Figure(std::string figureName)
		{
			figureName_ = figureName;
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		std::string figureName_;		// �������� ������

	}; // END OF class Figure  // ---------------------------------------------------------------------------------------------------------------- //

} // END OF JINX NAMESPACE


#endif // FIGURES1H
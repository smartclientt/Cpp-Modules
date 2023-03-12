#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	A("Bureaucrate_A", 5);
		Form		F("My_Form", 6, 50);
		std::cout << A << std::endl;
		std::cout << "-------------------------" << std::endl;
		std::cout << F;
		std::cout << "-------------------------" << std::endl;
		A.signForm(F);
		A.signForm(F);
		std::cout << "-------------------------" << std::endl;
		std::cout << F;
	}
	catch (std::runtime_error& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	return 0;
}

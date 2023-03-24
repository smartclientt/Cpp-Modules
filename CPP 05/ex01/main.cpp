#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	A("Bureaucrate_A", 5);
		Bureaucrat	B("Bureaucrate_B", 100);
		Form		F1("My_Form", 6, 50);
		Form		F2("My_Form", 10, 50);
		std::cout << "----------- A -----------" << std::endl;
		std::cout << A << std::endl;
		std::cout << F1;
		std::cout << "-------------------------" << std::endl;
		A.signForm(F1);
		std::cout << "-------------------------" << std::endl;
		A.signForm(F1);
		std::cout << "-------------------------" << std::endl;
		std::cout << F1;
		std::cout << "----------- B -----------" << std::endl;
		std::cout << B << std::endl;
		std::cout << F2;
		std::cout << "-------------------------" << std::endl;
		B.signForm(F2);
	}
	catch (std::runtime_error& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	return 0;
}

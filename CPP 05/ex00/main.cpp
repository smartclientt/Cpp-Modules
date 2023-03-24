#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat A("Bureaucrate_A", 149);
		Bureaucrat B("Bureaucrate_B", 50);
		Bureaucrat C("Bureaucrate_C", 10);

		A.decrementGrade();
		std::cout << B << std::endl;
		std::cout << A << std::endl;
		A.decrementGrade();
		std::cout << A << std::endl;

	}
	catch (std::runtime_error& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	return 0;
}

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat A("Bureaucrate_A", 149);
		Bureaucrat B("Bureaucrate_B", 50);
		Bureaucrat C("Bureaucrate_C", 10);

		A.incrementGrade();
		std::cout << B;

	}
	catch (std::runtime_error& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	return 0;
}

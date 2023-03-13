#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat	A("Bureaucrate_A", 5);
		ShrubberyCreationForm		F1("target1");
		RobotomyRequestForm			F2("target2");
		PresidentialPardonForm		F3("target3");
		// F1.beSigned(A);
		A.executeForm(F1);
		F2.beSigned(A);
		A.executeForm(F2);
	}
	catch (std::runtime_error& exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	return 0;
}

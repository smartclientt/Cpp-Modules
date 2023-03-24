#include "Intern.hpp"


Intern::Intern()
{ 
}
Intern::Intern(const Intern& intern)
{
	(void)intern;
}
Intern& Intern::operator=(const Intern& intern)
{
	(void)intern;
	return (*this);
}
Intern::~Intern()
{
}

AForm*	Intern::makeForm(const std::string& form_name, const std::string& target) const
{
	AForm		*ptr_form = NULL;
	std::string	name[3] = {"Shrubbery", "Robot", "President"};
	AForm		*form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};

	for(int i = 0; i < 3; i++)
	{
		if (name[i] == form_name)
			ptr_form = form[i];
		else
			delete form[i];
	}
	try
	{
		if (ptr_form == NULL)
			throw std::runtime_error("Can't create this type of Form");
		std::cout << "Intern Create " << form_name << std::endl;
	} catch (std::exception& exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	return ptr_form;
}
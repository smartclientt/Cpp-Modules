#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& intern);
		Intern& operator=(const Intern& intern);
		~Intern();

		AForm*	makeForm(const std::string& form_name, const std::string& target) const;
};

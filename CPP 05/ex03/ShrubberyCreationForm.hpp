#pragma	once

#include "AForm.hpp"

class	ShrubberyCreationForm: public AForm
{
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& shurbbery);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shurbbery);
		~ShrubberyCreationForm();

		void		execute(Bureaucrat const& executor) const;
	private :
		std::string 		_target;
};
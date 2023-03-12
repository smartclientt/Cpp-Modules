#pragma	once

#include "AForm.hpp"

class	PresidentialPardonForm: public AForm
{
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& president);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& president);
		~PresidentialPardonForm();

		void		execute(Bureaucrat const& executor) const;
	private :
		std::string		_target;
};
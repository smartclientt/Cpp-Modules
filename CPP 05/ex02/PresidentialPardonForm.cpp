#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Robot", 25, 5), _target("Default_target")
{}
PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("Robot", 25, 5), _target(target)
{}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& president): AForm(president.getFormName(), 25, 5), _target(president._target)
{}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& president)
{
	AForm::operator=(president);
	_target = president._target;
	return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{}

void		PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	(void)executor;
	std::cout << _target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
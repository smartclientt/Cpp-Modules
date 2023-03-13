#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("President", 25, 5), _target("Default_target")
{}
PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("President", 25, 5), _target(target)
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
	try
	{
		if(!getIsSigned())
			throw std::runtime_error("can't be executed before being signed");
		if (executor.getGrade() > getGradeExec())
			AForm::GradeTooLowException();
		std::cout << _target << "has been pardoned by Zaphod Beeblebrox" << std::endl;
	} catch (std::exception& exp)
	{
		std::cerr << "Form named : " << getFormName() << " " << exp.what() << std::endl;
		throw ;
	}
	
}
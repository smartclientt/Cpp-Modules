#include "ShrubberyCreationForm.hpp"


// caninocal form
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery", 145, 137), _target("Default_target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("Shrubbery", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shurbbery): AForm(shurbbery.getFormName(), 145, 137), _target(shurbbery._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shurbbery)
{
    AForm::operator=(shurbbery);
	_target = shurbbery._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void		ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    (void)executor;
	std::ofstream file(_target + "_shrubbery");
	if (!file.is_open())
	{
		std::cerr << "Can't open file" << std::endl;
        return ;
	}

	file << "       &&& &&  & &&"                   << std::endl;
    file << "      && &\\/&\\|& ()|/ @, &&"         << std::endl;
    file << "      &\\/(/&/&||/& /_/)_&/_&"         << std::endl;
    file << "   &() &\\/&|()|/&\\/ '%" "& ()"       << std::endl;
    file << "  &_\\_\\&&_\\ |& |&&/&__%_/_& &&"     << std::endl;
    file << "&&   && & &| &| /& & % ()& /&&"        << std::endl;
    file << " ()&_---()&\\&\\|&&-&&--%---()~"       << std::endl;
    file << "     &&     \\|||"                     << std::endl;
    file << "             |||"                      << std::endl;
    file << "             |||"                      << std::endl;
    file << "             |||"                      << std::endl;
    file << "       , -=-~  .-^- _"                 << std::endl;
}
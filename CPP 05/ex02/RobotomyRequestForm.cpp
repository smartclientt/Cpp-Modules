#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robot", 72, 45), _target("Default_target")
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("Robot", 72, 45), _target(target)
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robot): AForm(robot.getFormName(), 72, 45), _target(robot._target)
{
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robot)
{
	AForm::operator=(robot);
	_target = robot._target;
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}

void		RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	(void) executor;
	std::cout << "Ohhh i hear some  drilling noises: ZZZZRZZZRRZRZRZRZRZRZR" << std::endl;
	static int chance;
	if (++chance % 2 == 0)
		std::cout << _target << "has been robotomized successfully 50% of the time" << std::endl;
	else
		std::cout << "Robotomy Failed !" << std::endl;
}
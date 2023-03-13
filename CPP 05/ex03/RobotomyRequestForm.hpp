#pragma	once

#include "AForm.hpp"

class	RobotomyRequestForm: public AForm
{
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& robot);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& robot);
		~RobotomyRequestForm();

		void		execute(Bureaucrat const& executor) const;
	private :
		std::string _target;
};
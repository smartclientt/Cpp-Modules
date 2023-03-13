#include "Bureaucrat.hpp"

// member Functions
void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getFormName() << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << _name << " couldn't sign " << form.getFormName() << " because " << exp.what() << std::endl;
	}
}

// exception class
Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	throw std::runtime_error("Exception : Grade of Bureaucrat is too Low");
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	throw std::runtime_error("Exception : Grade of Bureaucrat is too Hight");
}

// increment and decrement grade
void	Bureaucrat::incrementGrade()
{
	if (++_grade > 150)
		Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrementGrade()
{
	if (--_grade < 1)
		Bureaucrat::GradeTooHighException();
}

// getters
std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

// Canonical Form
Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name), _grade(grade)
{
	if (grade > 150)
		Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat): _name(bureaucrat._name), _grade(bureaucrat._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

// overload << operator
std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << " , bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}

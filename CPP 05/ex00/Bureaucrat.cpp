#include "Bureaucrat.hpp"


// exception class
Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	throw std::runtime_error("Grade of Bureaucrat is too Low");
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	throw std::runtime_error("Grade of Bureaucrat is too Hight");
}

// increment and decrement grade
void	Bureaucrat::incrementGrade()
{
	if (++_grade > 150)
		GradeTooHighException tooHigh;
}

void	Bureaucrat::decrementGrade()
{
	if (--_grade < 1)
		GradeTooLowException tooLow;
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
		GradeTooHighException tooHigh;
	else if (grade < 1)
		GradeTooLowException tooLow;
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

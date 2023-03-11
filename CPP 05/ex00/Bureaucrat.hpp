#pragma once

#include <iostream>
#include <exception>
#include <stdexcept>

class	Bureaucrat
{
	public :
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		Bureaucrat& operator=(const Bureaucrat& bureaucrat);
		~Bureaucrat();

		class	GradeTooHighException: public std::exception
		{
			public :
				GradeTooHighException();
		};

		class	GradeTooLowException: public std::exception
		{
			public :
				GradeTooLowException();
		};

		void	incrementGrade();
		void	decrementGrade();

		std::string	getName() const;
		int			getGrade() const;

	private :
		Bureaucrat();
		const std::string	_name;
		int					_grade;
};

// overloading operator << 
std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

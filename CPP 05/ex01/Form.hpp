#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string& form_name, const int grade_sign, const int grade_exec);
		Form(const Form& form);
		Form& operator=(const Form& form);
		~Form();

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

		const std::string	getFormName() const;
		bool				getIsSigned() const;
		const int&			getGradeSign() const;
		const int&			getGradeExec() const;

		void				beSigned(const Bureaucrat& bureaucrat);
	private:
		const std::string	_form_name;
		bool				_is_signed;
		const int			_grade_sign;
		const int			_grade_exec;
};

// overloading operator <<
std::ostream&	operator<<(std::ostream& out, const Form& form);

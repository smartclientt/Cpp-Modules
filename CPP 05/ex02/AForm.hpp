#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const std::string& form_name, const int grade_sign, const int grade_exec);
		AForm(const AForm& form);
		AForm& operator=(const AForm& form);
		virtual ~AForm();

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
		virtual void		execute(Bureaucrat const& executor) const = 0;
	private:
		const std::string	_form_name;
		bool				_is_signed;
		const int			_grade_sign;
		const int			_grade_exec;
};

// overloading operator <<
std::ostream&	operator<<(std::ostream& out, const AForm& aform);

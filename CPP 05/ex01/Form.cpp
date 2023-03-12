#include "Form.hpp"

// sign a Form
void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (_is_signed)
		throw std::runtime_error(": The form is already signed");
	if (bureaucrat.getGrade() > _grade_sign)
		Form::GradeTooLowException();
	_is_signed = true;
}

// exception class
Form::GradeTooLowException::GradeTooLowException()
{
	throw std::runtime_error("Exception : Grade of Form is too Low");
}

Form::GradeTooHighException::GradeTooHighException()
{
	throw std::runtime_error("Exception : Grade of Form is too Hight");
}

// getters
const std::string	Form::getFormName() const
{
	return _form_name;
}

bool				Form::getIsSigned() const
{
	return _is_signed;
}

const int&			Form::getGradeSign() const
{
	return _grade_sign;
}

const int&			Form::getGradeExec() const
{
	return _grade_exec;
}

// canonical Form
Form::Form(): _form_name("Empty_Form"), _is_signed(false), _grade_sign(0), _grade_exec(0)
{
}

Form::Form(const std::string& form_name, const int grade_sign, const int grade_exec):
	_form_name(form_name), _is_signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (_grade_sign > 150 || _grade_exec > 150)
		;
	else if (_grade_sign < 1 || _grade_exec < 1)
		;
}

Form::Form(const Form& form):
	_form_name(form._form_name), _is_signed(form._is_signed), _grade_sign(form._grade_sign), _grade_exec(form._grade_exec)
{
	if (_grade_sign > 150 || _grade_exec > 150)
		;
	else if (_grade_sign < 1 || _grade_exec < 1)
		;
}

Form& Form::operator=(const Form& form)
{
	_is_signed = form._is_signed;
	return (*this);
}

Form::~Form()
{
}

// overload << operator
std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << "Form name : " << form.getFormName() << std::endl;
	out << "Form status : " << form.getIsSigned() << std::endl;
	out << "Form signer grade : " << form.getGradeSign() << std::endl;
	out << "Form execution grade : " << form.getGradeExec() << std::endl;
	return (out);
}
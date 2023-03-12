#include "AForm.hpp"

// sign a AForm
void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (_is_signed)
		throw std::runtime_error(": The form is already signed");
	if (bureaucrat.getGrade() > _grade_sign)
		AForm::GradeTooLowException();
	_is_signed = true;
}

// exception class
AForm::GradeTooLowException::GradeTooLowException()
{
	throw std::runtime_error("Exception : Grade of AForm is too Low");
}

AForm::GradeTooHighException::GradeTooHighException()
{
	throw std::runtime_error("Exception : Grade of AForm is too Hight");
}

// getters
const std::string	AForm::getFormName() const
{
	return _form_name;
}

bool				AForm::getIsSigned() const
{
	return _is_signed;
}

const int&			AForm::getGradeSign() const
{
	return _grade_sign;
}

const int&			AForm::getGradeExec() const
{
	return _grade_exec;
}

// canonical AForm
AForm::AForm(): _form_name("Empty_Form"), _is_signed(false), _grade_sign(0), _grade_exec(0)
{
}

AForm::AForm(const std::string& form_name, const int grade_sign, const int grade_exec):
	_form_name(form_name), _is_signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (_grade_sign > 150 || _grade_exec > 150)
		;
	else if (_grade_sign < 1 || _grade_exec < 1)
		;
}

AForm::AForm(const AForm& form):
	_form_name(form._form_name), _is_signed(form._is_signed), _grade_sign(form._grade_sign), _grade_exec(form._grade_exec)
{
	if (_grade_sign > 150 || _grade_exec > 150)
		;
	else if (_grade_sign < 1 || _grade_exec < 1)
		;
}

AForm& AForm::operator=(const AForm& form)
{
	_is_signed = form._is_signed;
	return (*this);
}

AForm::~AForm()
{
}

// overload << operator
std::ostream&	operator<<(std::ostream& out, const AForm& form)
{
	out << "AForm name : " << form.getFormName() << std::endl;
	out << "AForm status : " << form.getIsSigned() << std::endl;
	out << "AForm signer grade : " << form.getGradeSign() << std::endl;
	out << "AForm execution grade : " << form.getGradeExec() << std::endl;
	return (out);
}
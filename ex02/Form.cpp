#include "Form.hpp"

Form::Form(): _name("Random form"), _gradeSign(1), _gradeExec(1)
{
	std::cout << "Form default constructor called" << std::endl;
	_isSigned = false;
	return ;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "Form detailed constructor called" << std::endl;
	_isSigned = false;
	if (gradeSign < 1)
		throw (GradeTooHighException());
	if (gradeSign > 150)
		throw (GradeTooLowException());
	if (gradeExec < 1)
		throw (GradeTooHighException());
	if (gradeExec > 150)
		throw (GradeTooLowException());	
}

Form::~Form()
{
	return ;
}

std::string Form::getName(void) const
{
	return (_name);
}

int Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int Form::getGradeExec(void) const
{
	return (_gradeExec);
}


bool Form::getSignstatus(void) const
{
	return (_isSigned);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSign)
		throw (GradeTooLowException());
	else
		_isSigned = true;
}

void Form::setSignStatus(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
		_isSigned = true;
	else
		throw (GradeTooLowException());
}

std::ostream &operator<< (std::ostream &out, const Form &form)
{
	out << "Form: " << form.getName() << std::endl << "sign status: " << form.getSignstatus() << std::endl << \
	"Required grade to sign: " << form.getGradeSign() << std::endl << "Required grade to execute: " << \
	form.getGradeExec() << std::endl;
	return (out);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Exception: Grade is too damn high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Exception: Grade is too damn low");
}
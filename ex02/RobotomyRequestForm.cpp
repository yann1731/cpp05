#include "RobotomyRequestForm.hpp"

// •RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy request form", 72, 45), _target("default")
{
    std::cout << "default robotomy form constructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string &target): Form("Robotomy request form", 72, 45), _target(target)
{
    std::cout << "target robotomy form constructor called" << std::endl;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "default robotomy form destructor called" << std::endl;
    return ;
}

std::string RobotomyRequestForm::getName(void) const
{
    return (this->getName());
}

int RobotomyRequestForm::getGradeSign(void) const
{
    return (this->getGradeSign());
}

int RobotomyRequestForm::getGradeExec(void) const
{
    return (this->getGradeExec());
}

bool RobotomyRequestForm::getSignStatus(void)
{
    return (this->getSignstatus());
}

void RobotomyRequestForm::beSigned(const Bureaucrat &bureaucrat)
{
	this->setSignStatus(bureaucrat);
}

void RobotomyRequestForm::setSignStatus(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradeSign())
		this->setSignStatus(bureaucrat);
	else
		throw (GradeTooLowException());
}

const char *RobotomyRequestForm::GradeTooHighException::what() const throw()
{
    return ("Exception: Grade is too damn high");
}

const char *RobotomyRequestForm::GradeTooHighException::what() const throw()
{
    return ("Exception: Grade is too damn high");
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &robotomyRequestForm)
{
    out << "Form name: " << robotomyRequestForm.getName() << "\n" << "Required grade to sign: " << \
    robotomyRequestForm.getGradeSign() << "\n" << "Required grade to execute: " << robotomyRequestForm.getGradeExec()\
    << "\n" << "Status of the form: " << robotomyRequestForm.getSignstatus() << std::endl;
    return (out);
}
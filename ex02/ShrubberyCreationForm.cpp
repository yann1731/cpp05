#include "ShrubberyCreationForm.hpp"

// class ShrubberyCreationForm: public Form
// {
//     class GradeTooLowException: public std::exception
//     {
//         virtual const char *what() const throw();
//     };
//     class GradeTooHighException: public std::exception
//     {
//     	virtual const char *what() const throw();
//     };
// };

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery creation form", 145, 137), _target("default")
{
    std::cout << "new default shrubbery form created" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target): Form("Shrubbery creation form", 145, 137), _target(target)
{
    std::cout << "new target shrubbery form created" << std::endl;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "default shrubbery form destructor called" << std::endl;
    return ;
}

std::string ShrubberyCreationForm::getName(void) const
{
    return (this->getName());
}

int ShrubberyCreationForm::getGradeSign(void) const
{
    return (this->getGradeSign());
}

int ShrubberyCreationForm::getGradeExec(void) const
{
    return (this->getGradeExec());
}

bool ShrubberyCreationForm::getSignStatus(void) const
{
    return (this->getSignstatus());
}

void ShrubberyCreationForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getGradeSign())
		throw (GradeTooLowException());
	else
		this->setSignStatus(bureaucrat);
}

void ShrubberyCreationForm::setSignStatus(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradeSign())
		this->setSignStatus(bureaucrat);
	else
		throw (GradeTooLowException());
}

class GradeTooLowException: public std::exception
{
    virtual const char *what() const throw();
};
class GradeTooHighException: public std::exception
{
	virtual const char *what() const throw();
};
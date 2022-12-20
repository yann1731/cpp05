#include "ShrubberyCreationForm.hpp"

// class ShrubberyCreationForm: public Form
// {
//     void beSigned(const Bureaucrat &bureaucrat);
//     class GradeTooLowException: public std::exception
//     {
//         virtual const char *what() const throw();
//     };
//     class GradeTooHighException: public std::exception
//     {
//     	virtual const char *what() const throw();
//     };
// };

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery creation form", 145, 137)
{
    _target = "default";
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target): Form("Shrubbery creation form", 145, 137)
{

    _target = target;
    std::cout << "new shrubbery form created" << std::endl;
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


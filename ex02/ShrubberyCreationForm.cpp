#include "ShrubberyCreationForm.hpp"

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

const char *ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
    return ("Exception: Grade is too damn high");
}

const char *ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
    return ("Exception: Grade is too damn high");
}

std::ostream &operator<<(std::ostream out, const ShrubberyCreationForm &shrubberyCreationForm)
{
    out << "Form name: " << shrubberyCreationForm.getName() << "\n" << "Required grade to sign: " << \
    shrubberyCreationForm.getGradeSign() << "\n" << "Required grade to execute: " << shrubberyCreationForm.getGradeExec()\
    << "\n" << "Status of the form: " << shrubberyCreationForm.getSignstatus() << std::endl;
}
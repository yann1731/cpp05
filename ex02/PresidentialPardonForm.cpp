#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential pardon form", 25, 5), _target("default")
{
    std::cout << "default presidential pardon form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string &target): Form("Presidential pardon form", 25, 5), _target(target)
{
    std::cout << "target presidential pardon form created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "default presidential pardon form created" << std::endl;
}

const char *PresidentialPardonForm::GradeTooHighException::what() const throw()
{
    std::cout << "Exception: Grade is too damn high";
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw()
{
    std::cout << "Exception: Grade is too damn low";
}

std::ostream &operator<< (std::ostream &out, const PresidentialPardonForm &presidentialPardonForm)
{
    out << "Form name: " << presidentialPardonForm.getName() << "\n" << "Required grade to sign: " << \
    presidentialPardonForm.getGradeSign() << "\n" << "Required grade to execute: " << presidentialPardonForm.getGradeExec()\
    << "\n" << "Status of the form: " << presidentialPardonForm.getSignstatus() << std::endl;
    return (out);
}
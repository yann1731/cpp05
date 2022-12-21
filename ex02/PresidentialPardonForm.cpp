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

std::string PresidentialPardonForm::getName(void) const
{
    return (this->getName());
}

int PresidentialPardonForm::getGradeSign(void) const
{
    return (this->getGradeSign());
}

int PresidentialPardonForm::getGradeExec(void) const
{
    return (this->getGradeExec());
}

bool PresidentialPardonForm::getSignStatus(void)
{
     return (this->getSignstatus());
}

void PresidentialPardonForm::beSigned(const Bureaucrat &bureaucrat)
{
    this->setSignStatus(bureaucrat);
}

void PresidentialPardonForm::setSignStatus(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradeSign())
        this->setSignStatus(bureaucrat);
    else
        throw (GradeTooLowException());
}

std::ostream &operator<< (std::ostream &out, const PresidentialPardonForm &presidentialPardonForm)
{
    out << "Form name: " << presidentialPardonForm.getName() << "\n" << "Required grade to sign: " << \
    presidentialPardonForm.getGradeSign() << "\n" << "Required grade to execute: " << presidentialPardonForm.getGradeExec()\
    << "\n" << "Status of the form: " << presidentialPardonForm.getSignstatus() << std::endl;
    return (out);
}
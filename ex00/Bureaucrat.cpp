#include "Bureaucrat.hpp"
#include <string>

Bureaucrat::Bureaucrat(): _name("Marvin"), _grade(150)
{   
    std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name), _grade(grade)
{
    std::cout << "detailed constructor called" << std::endl;
    if (grade < 1)
        throw (GradeTooHighException());
    if (grade > 150)
        throw (GradeTooLowException());
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor called" << std::endl;
}

int Bureaucrat::getGrade(void)
{
    return (_grade);
}

const std::string &Bureaucrat::getName(void)
{
    return (_name);
}

void Bureaucrat::promote(void)
{
    _grade--;
    if (_grade <= 0)
        throw (GradeTooHighException());
}

void Bureaucrat::demote(void)
{
    _grade++;
    if (_grade > 150)
        throw (GradeTooLowException());
}
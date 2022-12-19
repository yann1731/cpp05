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

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}

const std::string &Bureaucrat::getName(void) const
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

void Bureaucrat::signForm(Form &form)
{
    if (form.getSignstatus() == true)
    {
        std::cout << *this << " cannot sign form because it is already signed!" << std::endl; 
        return ;
    }
    try
    {
        form.beSigned(*this);
        std::cout << *this << " has signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": ";
        std::cerr << *this << " could not sign, grade insufficient" << std::endl;
    }
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Exception: Grade is too damn high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Exception: Grade is too damn low");
}
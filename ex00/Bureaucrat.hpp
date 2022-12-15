#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat
{
    public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    ~Bureaucrat();
    class GradeTooLowException: public std::exception
    {
        virtual const char *what() const throw()
        {
            return "Grade too low";
        }
    };
    class GradeTooHighException: public std::exception
    {
        virtual const char *what() const throw()
        {
            return "Grade too high";
        }
    };
    private:
    const std::string _name;
    int _grade;
};

#endif
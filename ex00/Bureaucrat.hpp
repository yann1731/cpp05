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
    void setGrade(int grade);
    int getGrade(void);
	const std::string &getName(void);
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
    std::string const _name;
    int _grade;
};

#endif
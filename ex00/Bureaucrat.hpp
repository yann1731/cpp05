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
    int getGrade(void);
	const std::string &getName(void);
    void promote(void);
	void demote(void);
    class GradeTooLowException: public std::exception
    {
        virtual const char *what() const throw()
        {
            return "Bureaucrat::GradeTooLowException: Grade too low";
        }
    };
    class GradeTooHighException: public std::exception
    {
        virtual const char *what() const throw()
        {
            return "Bureaucrat::GradeTooHighException: Grade too high";
        }
    };
    private:
    const std::string _name;
    int _grade;
};

#endif
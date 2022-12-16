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
    int getGrade(void) const;
	const std::string &getName(void) const;
    void promote(void);
	void demote(void);
    class GradeTooLowException: public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooHighException: public std::exception
    {
    	const char *what() const throw();
    };
    private:
    const std::string _name;
    int _grade;
};

std::ostream &operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
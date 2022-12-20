#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    std::string getName(void) const;
    int getGradeSign(void) const;
    int getGradeExec(void) const;
    bool getSignStatus(void) const;
    void beSigned(const Bureaucrat &bureaucrat);
    class GradeTooLowException: public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooHighException: public std::exception
    {
    	virtual const char *what() const throw();
    };
};

#endif
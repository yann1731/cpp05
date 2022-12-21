#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string &target);
    ~ShrubberyCreationForm();
    class GradeTooLowException: public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooHighException: public std::exception
    {
    	virtual const char *what() const throw();
    };
    private:
    std::string _target;
};

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &shrubberyCreationForm);

#endif
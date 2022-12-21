#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string &target);
    ~RobotomyRequestForm();
    class GradeTooLowException: public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooHighException: public std::exception
    {
    	const char *what() const throw();
    };
    private:
    std::string _target; 
};

std::ostream &operator<< (std::ostream &out, const RobotomyRequestForm &robotomyRequestForm);
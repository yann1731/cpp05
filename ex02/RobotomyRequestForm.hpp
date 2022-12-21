#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string &target);
    ~RobotomyRequestForm();
    std::string getName(void) const;
    int getGradeSign(void) const;
    int getGradeExec(void) const;
    bool getSignStatus(void);
    void beSigned(const Bureaucrat &bureaucrat);
    void setSignStatus(const Bureaucrat &bureaucrat);
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

std::ostream &operator<< (std::ostream &out, const RobotomyRequestForm &robotomyRequestForm);
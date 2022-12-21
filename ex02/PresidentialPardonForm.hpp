#include <iostream>
#include "Form.hpp"
// •PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.
class PresidentialPardonForm: public Form
{
    PresidentialPardonForm();
    PresidentialPardonForm(std::string &target);
    ~PresidentialPardonForm();
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
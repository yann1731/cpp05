#include <iostream>
#include "Form.hpp"
// •PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.
class PresidentialPardonForm: public Form
{
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string &target);
    ~PresidentialPardonForm();
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

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &presidentialPardonForm);
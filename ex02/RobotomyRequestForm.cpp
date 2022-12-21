#include "RobotomyRequestForm.hpp"

// •RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.

// class RobotomyRequestForm: public Form
// {
//     RobotomyRequestForm();
//     RobotomyRequestForm(std::string &target);
//     ~RobotomyRequestForm();
//     std::string getName(void) const;
//     int getGradeSign(void) const;   
//     int getGradeExec(void) const;
//     bool getSignStatus(void);
//     void beSigned(const Bureaucrat &bureaucrat);
//     void setSignStatus(const Bureaucrat &bureaucrat);
//     class GradeTooLowException: public std::exception
//     {
//         virtual const char *what() const throw();
//     };
//     class GradeTooHighException: public std::exception
//     {
//     	virtual const char *what() const throw();
//     };
//     private:
//     std::string _target; 
// };

// std::ostream &operator<< (std::ostream &out, const RobotomyRequestForm &robotomyRequestForm);

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy request form", 72, 45), _target("default")
{
    
}
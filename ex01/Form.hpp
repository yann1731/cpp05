#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

//needs to throw exception if the grades are out of bounds
//add a beSigned member function to form that takes a bureaucrat as input
//add a signForm member function to the bureaucrat	if the form got signed,
//it will print something like:
//<bureaucrat> signed <form>
//Otherwise, it will print something like:
//<bureaucrat> couldn’t sign <form> because <reason>.
class Form
{
	public:
	Form();
	Form(const std::string name, const int gradeSign, const int gradeExec);
	~Form();
	const std::string getName(void) const;
	const bool getSignstatus(void) const;
	const int getGradeSign(void) const;
	const int getGradeExec(void) const;
	void beSigned(const Bureaucrat &bureaucrat);
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
	bool _isSigned;
	const int _gradeSign;
	const int _gradeExec;
};

std::ostream &operator<< (std::ostream &out, const Form &form);

#endif
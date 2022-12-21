#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"
class Bureaucrat;
class Form;

class Form
{
	public:
	Form();
	Form(const std::string name, const int gradeSign, const int gradeExec);
	virtual ~Form();
	std::string getName(void) const;
	bool getSignstatus(void) const;
	int getGradeSign(void) const;
	int getGradeExec(void) const;
	void beSigned(const Bureaucrat &bureaucrat);
	void setSignStatus(const Bureaucrat &bureaucrat);
	void execute(const Bureaucrat &bureaucrat) const;
	class GradeTooLowException: public std::exception
    {
        const char *what() const throw();
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
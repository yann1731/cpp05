#include "Form.hpp"

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

Form::Form(): _name("Random form"), _gradeExec(1), _gradeSign(1), _isSigned(false)
{
	return ;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _isSigned(false)
{
	if (gradeSign < 1)
		throw (GradeTooHighException());
	if (gradeSign > 150)
		throw (GradeTooLowException());
	if (gradeExec < 1)
		throw (GradeTooHighException());
	if (gradeExec > 150)
		throw (GradeTooLowException());	
}





std::ostream &operator<< (std::ostream &out, const Form &form)
{
	out << "Form: " << form.getName() << std::endl << "sign status: " << form.getSignstatus() << std::endl << \
	"Required grade to sign: " << form.getGradeSign() << std::endl << "Required grade to execute: " << \
	form.getGradeExec() << std::endl;
	return (out);
}
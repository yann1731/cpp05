#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>


//write getters for all attributes
//write a << overloader
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
	~Form();
	private:
	const std::string _name;
	bool isSigned;
	const int gradeSign;
	const int gradeExec;
};


#endif
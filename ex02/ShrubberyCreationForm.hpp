#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name, int grade);
    ~ShrubberyCreationForm();
    std::string getName(void) const;
    int getGrade(void) const;
    
};

#endif
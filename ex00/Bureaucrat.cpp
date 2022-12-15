#include "Bureaucrat.hpp"
#include <string>

// class Bureaucrat: std::exception
// {
//     public:
//     Bureaucrat();
//     Bureaucrat(int grade);
//     ~Bureaucrat();
    


//     private:
//     const std::string name;
//     int grade;
// };

Bureaucrat::Bureaucrat(): _name("Marvin"), _grade(150)
{   
    std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name), _grade(grade)
{
    std::cout << "detailed constructor called" << std::endl;
}
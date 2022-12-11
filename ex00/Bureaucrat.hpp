#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
// Let’s design an artificial nightmare of offices, corridors, forms, and waiting queues.
// Sounds fun? No? Too bad.
// First, start by the smallest cog in this vast bureaucratic machine: the Bureaucrat.
// A Bureaucrat must have:
// • A constant name.
// • And a grade that ranges from 1 (highest possible grade) to 150 (lowest possible
// grade).
// Any attempt to instantiate a Bureaucrat using an invalid grade must throw an exception:
// either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.

class Bureaucrat
{
    public:
    Bureaucrat();
    ~Bureaucrat();
    


    private:
    const std::string name;
    int grade;
};

#endif
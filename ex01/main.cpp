#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Form newForm("Fry's pay", 100, 100);
        Bureaucrat hermes("Hermes Conrad", 36);
        Bureaucrat bender("Bender b Rodriguez", 150);
        Bureaucrat numberOne("number one", 1);
        bender.signForm(newForm);
        hermes.signForm(newForm);
        numberOne.signForm(newForm); 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
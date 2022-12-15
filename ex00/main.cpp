#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat marvin("Marvin", -1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}
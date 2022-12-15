#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bill("bill", 23);
    try
    {
        Bureaucrat marvin("Marvin", 4);
        std::cout << "Marvin's grade is " << marvin.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << bill.getName() << " is a bureaucrat of grade " << bill.getGrade() << std::endl;
    
    return (0);
}
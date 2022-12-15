#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bill("bill", 2);
    try
    {
        Bureaucrat marvin("Marvin", 149);
        std::cout << "Marvin's grade is " << marvin.getGrade() << std::endl;
		marvin.demote();
		std::cout << "Marvin's grade is " << marvin.getGrade() << std::endl;
		marvin.demote();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << bill.getName() << " is a bureaucrat of grade " << bill.getGrade() << std::endl;
	bill.promote();
	std::cout << bill.getName() << " is a bureaucrat of grade " << bill.getGrade() << std::endl;
	try
	{
		bill.promote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (0);
}
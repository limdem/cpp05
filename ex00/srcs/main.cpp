#include "../includes/Bureaucrat.hpp"
#include <iostream>

int main()
{
    
    Bureaucrat  bureaucrat1("Morpheus", 2);
    std::cout << bureaucrat1 << std::endl;
    bureaucrat1.incrementGrade();
    std::cout << bureaucrat1 << std::endl;
    bureaucrat1.decrementGrade();
    std::cout << bureaucrat1 << std::endl;
    
    try
    {
        Bureaucrat  bureaucrat2("Neo", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat  bureaucrat2("Neo", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat  bureaucrat2("Neo", 1);
        std::cout << bureaucrat2 << std::endl;
        bureaucrat2.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat  bureaucrat2("Neo", 150);
        std::cout << bureaucrat2 << std::endl;
        bureaucrat2.decrementGrade();
        std::cout << bureaucrat2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    
    try
    {
        Bureaucrat  bureaucrat1("Neo", 0);
        bureaucrat1.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    /*
    Bureaucrat  bureaucrat1("Neo", 1);
    Bureaucrat  bureaucrat2(bureaucrat1);
    Bureaucrat  bureaucrat3;
    Bureaucrat  bureaucrat4("Morpheus", 4);

    bureaucrat3 = bureaucrat1;
    bureaucrat4 = bureaucrat1;
    std::cout << bureaucrat1 << std::endl;
    std::cout << bureaucrat2 << std::endl;
    std::cout << bureaucrat3 << std::endl;
    std::cout << bureaucrat4 << std::endl;
    */
    return (0);
}
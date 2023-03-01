#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include <iostream>

int main()
{
    /*
    Bureaucrat  bureaucrat("neo", 1);
    Form    form("form1", 1, 1);
    
    std::cout << "name: " << form.getName() << std::endl;
    std::cout << "sign: " << form.getSign() << std::endl;
    std::cout << "gradesign: " << form.getGradeSign() << std::endl;
    std::cout << "gradeexec: " << form.getGradeExec() << std::endl;
    
    try
    {
        form.beSigned(bureaucrat);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "name: " << form.getName() << std::endl;
    std::cout << "sign: " << form.getSign() << std::endl;
    std::cout << "gradesign: " << form.getGradeSign() << std::endl;
    std::cout << "gradeexec: " << form.getGradeExec() << std::endl;
    
    try
    {
        bureaucrat.signForm(form);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "name: " << form.getName() << std::endl;
    std::cout << "sign: " << form.getSign() << std::endl;
    std::cout << "gradesign: " << form.getGradeSign() << std::endl;
    std::cout << "gradeexec: " << form.getGradeExec() << std::endl;
    */
    /*
    try
    {
        Bureaucrat  bureaucrat1("neo", -500);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    */
    /*
    try
    {
        Bureaucrat  bureaucrat1("neo", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    */
    /*
    try
    {
        Bureaucrat  bureaucrat1("neo", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    */
    /*
    Form    form1("matrice", 5, 7);
    std::cout << form1 << std::endl;
    Bureaucrat  bureaucrat1("neo", 1);
    Bureaucrat  bureaucrat2("trinity", 8);
    bureaucrat2.signForm(form1);
    std::cout << form1 << std::endl;
    bureaucrat1.signForm(form1);
    std::cout << form1 << std::endl;
    */
    
    Form    form1("matrice", 5, 7);
    Form    form3("matrice", 24, 107);
    std::cout << form1 << std::endl;
    Form    form2(form1);
    std::cout << form2 << std::endl;
    form1 = form3;
    std::cout << form1 << std::endl;
    
    return (0);
}
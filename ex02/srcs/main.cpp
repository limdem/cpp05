#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShruberryCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include <iostream>

int main()
{
    
    Bureaucrat  bureaucrat("neo", 150);
    ShruberryCreationForm   shruberryCreationForm("jardin");
    RobotomyRequestForm   robotomyRequestForm("mrrobot");

    std::cout << "name: " << shruberryCreationForm.getName() << std::endl;
    std::cout << "sign: " << shruberryCreationForm.getSign() << std::endl;
    std::cout << "gradesign: " << shruberryCreationForm.getGradeSign() << std::endl;
    std::cout << "gradeExec: " << shruberryCreationForm.getGradeExec() << std::endl;
    bureaucrat.signForm(shruberryCreationForm);
    bureaucrat.signForm(robotomyRequestForm);
    try
    {
        shruberryCreationForm.execute(bureaucrat);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "name: " << robotomyRequestForm.getName() << std::endl;
    std::cout << "sign: " << robotomyRequestForm.getSign() << std::endl;
    std::cout << "gradesign: " << robotomyRequestForm.getGradeSign() << std::endl;
    std::cout << "gradeExec: " << robotomyRequestForm.getGradeExec() << std::endl;
    try
    {
        robotomyRequestForm.execute(bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    /*
    Bureaucrat  bureaucrat("neo", 1);
    ShruberryCreationForm   shruberryCreationForm("jardin");
    RobotomyRequestForm   robotomyRequestForm("mrrobot");

    std::cout << "name: " << shruberryCreationForm.getName() << std::endl;
    std::cout << "sign: " << shruberryCreationForm.getSign() << std::endl;
    std::cout << "gradesign: " << shruberryCreationForm.getGradeSign() << std::endl;
    std::cout << "gradeExec: " << shruberryCreationForm.getGradeExec() << std::endl;
    bureaucrat.signForm(shruberryCreationForm);
    bureaucrat.signForm(robotomyRequestForm);
    try
    {
        shruberryCreationForm.execute(bureaucrat);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "name: " << robotomyRequestForm.getName() << std::endl;
    std::cout << "sign: " << robotomyRequestForm.getSign() << std::endl;
    std::cout << "gradesign: " << robotomyRequestForm.getGradeSign() << std::endl;
    std::cout << "gradeExec: " << robotomyRequestForm.getGradeExec() << std::endl;
    try
    {
        robotomyRequestForm.execute(bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    */
    /*
    Bureaucrat  bureaucrat("neo", 1);
    ShruberryCreationForm   shruberryCreationForm("jardin");
    RobotomyRequestForm   robotomyRequestForm("mrrobot");

    std::cout << bureaucrat << std::endl;
    try
    {
        bureaucrat.executeForm(shruberryCreationForm);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    bureaucrat.signForm(shruberryCreationForm);
    try
    {
        bureaucrat.executeForm(shruberryCreationForm);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << robotomyRequestForm << std::endl;

    try
    {
        bureaucrat.executeForm(robotomyRequestForm);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    */
    /*
    Bureaucrat  bureaucrat1("whiterose", 51);
    Bureaucrat  bureaucrat2("elliot", 1);
    RobotomyRequestForm   robotomyRequestForm("mrrobot");

    std::cout << bureaucrat1 << std::endl;
    try
    {
        bureaucrat1.executeForm(robotomyRequestForm);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    bureaucrat1.signForm(robotomyRequestForm);
    try
    {
        bureaucrat1.executeForm(robotomyRequestForm);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << robotomyRequestForm << std::endl;

    try
    {
        bureaucrat2.executeForm(robotomyRequestForm);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    */
    /*
    Form    *form;

    form = new RobotomyRequestForm;
    std::cout << *form << std::endl;
    delete form;
    */
    return (0);
}
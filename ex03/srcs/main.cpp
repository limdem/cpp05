#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShruberryCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include <iostream>

int main()
{
    /*
    Intern  intern;
    Bureaucrat  bureaucrat("neo", 1);
    Form    *form1;
    Form    *form2;
    Form    *form3;

    
    form1 = intern.makeForm("shruberry request", "Bender");
    bureaucrat.signForm(*form1);
    bureaucrat.executeForm(*form1);
    delete form1;
    
    form2 = intern.makeForm("robotomy request", "Bender");
    bureaucrat.signForm(*form2);
    bureaucrat.executeForm(*form2);
    delete form2;

    form3 = intern.makeForm("presidential request", "Bender");
    bureaucrat.signForm(*form3);
    bureaucrat.executeForm(*form3);
    delete form3;
    */
    Intern  intern;
    Bureaucrat  bureaucrat("neo", 1);
    Form    *form1;
    Form    *form2;

    form1 = intern.makeForm("presidential request", "Bender");
    if (!form1)
        return (1);
    bureaucrat.signForm(*form1);
    bureaucrat.executeForm(*form1);
    delete form1;
    form2 = intern.makeForm("false request", "Bender");
    if (!form2)
        return (1);
    bureaucrat.signForm(*form2);
    bureaucrat.executeForm(*form2);
    delete form2;
    return (0);
}
#include "../includes/Intern.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShruberryCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern default destructor called" << std::endl;
}

Intern::Intern(const Intern& src)
{
    *this = src;
    std::cout << "Intern copy destructor called" << std::endl;
}

Intern& Intern::operator= (const Intern& src)
{
    std::cout << "Intern copy assignment called" << std::endl;
    (void)src;
    return (*this);
}

Form    *Intern::makeForm(std::string formName, std::string target)
{
    Form    *ptr;
    Form* (*p[3]) (std::string);
    std::string requests[3];
    int i;

    initializeFormMaking(p, requests);
    i = 0;
    while (i < 3)
    {
        if (!formName.compare(requests[i]))
        {
            std::cout << "Intern creates " << formName << std::endl;
            ptr = p[i](target);
            return (ptr);
        }
        i++;
    }
    std::cout << "The requested form does not exist" << std::endl;
    return (NULL);
}

void    Intern::initializeFormMaking(Form* (*p[3]) (std::string), std::string requests[3])
{
    p[0] = &createShruBerryForm;
    p[1] = &createRobotomyForm;
    p[2] = &createPresidentialForm;
    requests[0] = "shruberry request";
    requests[1] = "robotomy request";
    requests[2] = "presidential request";
}

Form    *Intern::createShruBerryForm(std::string target)
{
    Form    *form;

    form = new (std::nothrow) ShruberryCreationForm(target);
    if (!form)
        return (NULL);
    return (form);
}
Form    *Intern::createRobotomyForm(std::string target)
{
    Form    *form;

    form = new (std::nothrow) RobotomyRequestForm(target);
    if (!form)
        return (NULL);
    return (form);
}
Form    *Intern::createPresidentialForm(std::string target)
{
    Form    *form;

    form = new (std::nothrow) PresidentialPardonForm(target);
    if (!form)
        return (NULL);
    return (form);
}
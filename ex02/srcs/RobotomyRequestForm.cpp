#include "../includes/RobotomyRequestForm.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm()
:Form("robotomyRequestForm", 72, 45, "robotRequestTarget")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm default destructor called" << std::endl;    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
:Form(src.getName(), src.getGradeSign(), src.getGradeExec(), src.getTarget())
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& src)
{
    this->setSign(src.getSign());
    std::cout << "RobotomyRequestForm copy assignment called" << std::endl;
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
:Form("robotomyRequestForm", 72, 45, target)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

void    RobotomyRequestForm::beExecuted() const
{
    unsigned seed;
    int random;

    seed = time(0);
    srand(seed);
    std::cout << "vvvVVVViiiiIII...  vvvVVVViiiiIIIvvvVVVViiiiIII... vvvVVVViiiiIIIvvvVVVViiiiIIIvvvVVVViiiiIII" << std::endl;
    random = rand() % 100 + 1;
    if (random > 50)
        std::cout << this->getTarget() << " has been robotomized" << std::endl;
    else
        std::cout << "robotomization failed" << std::endl;
}
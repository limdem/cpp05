#include "../includes/PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm()
:Form("presidentialPardonForm", 25, 5, "presidentialPardonTarget")
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm default destructor called" << std::endl;    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
:Form(src.getName(), src.getGradeSign(), src.getGradeExec(), src.getTarget())
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& src)
{
    this->setSign(src.getSign());
    std::cout << "PresidentialPardonForm copy assignment called" << std::endl;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
:Form("presidentialPardonForm", 25, 5, target)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

void    PresidentialPardonForm::beExecuted() const
{
    std::cout << "Zaphod Beeblebrox forgave " << this->getTarget() << std::endl;
}
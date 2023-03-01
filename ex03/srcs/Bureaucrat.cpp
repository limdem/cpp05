#include "../includes/Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <sstream>

Bureaucrat::Bureaucrat()
:_name("bureaucrat"), _grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
:_name(src._name)
{
    this->_grade = src._grade;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& src)
{
    this->_grade = src._grade;
    std::cout << "Bureaucrat copy assignment called" << std::endl;
    return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade)
:_name(name)
{
    this->_grade = grade;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void    Bureaucrat::incrementGrade()
{
    this->_grade--;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::decrementGrade()
{
    this->_grade++;
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void    Bureaucrat::signForm(Form& form)
{
    if (this->getGrade() > form.getGradeSign())
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because his grade is too low" << std::endl;
        return ;
    }
    std::cout << this->getName() << " signed " << form.getName() << std::endl;
    form.beSigned(*this);
}

void    Bureaucrat::executeForm(Form const & form)
{
    if (this->_grade > form.getGradeExec())
    {
        std::cout << this->getName() << " can't execute " << form.getName() << " because his grade is too low" << std::endl;
        return ; 
    }
    if (!form.getSign())
    {
        std::cout << this->getName() << " can't execute " << form.getName() << " because the form is not signed" << std::endl;
        return ; 
    }
    std::cout << this->_name << " executed " << form.getName() << std::endl;
    form.execute(*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat exception: grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat exception: grade too low");   
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& obj)
{
    std::string grade;
    std::stringstream ss;

    ss << obj.getGrade();
    ss >> grade;
    os << obj.getName() + ", bureaucrat grade " + grade + ".";
    return (os);
}
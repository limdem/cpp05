#include "../includes/Form.hpp"
#include <iostream>
#include <sstream>

Form::Form()
:_name("form"), _sign(false), _gradeSign(1), _gradeExec(1)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form default destructor called" << std::endl;
}

Form::Form(const Form& src)
:_name(src._name), _sign(src._sign), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
    std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator= (const Form& src)
{
    this->_sign = src._sign;
    std::cout << "Form copy assignment called" << std::endl;
    return (*this);
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec)
:_name(name), _sign(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    std::cout << "Form constructor called" << std::endl;
    if (this->_gradeSign < 1)
        throw Form::GradeTooHighException();
    if (this->_gradeSign > 150)
        throw Form:: GradeTooLowException();
    if (this->_gradeExec < 1)
        throw Form:: GradeTooHighException();
    if (this->_gradeExec > 150)
        throw Form::GradeTooLowException();
}

std::string Form::getName() const
{
    return (this->_name);
}

bool    Form::getSign() const
{
    return (this->_sign);
}

int     Form::getGradeSign() const
{
    return (this->_gradeSign);
}

int     Form::getGradeExec() const
{
    return (this->_gradeExec);
}

void    Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradeSign())
        this->_sign = true;
    else
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("FormException: grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("FormException: grade too low");
}

std::ostream& operator<< (std::ostream& os, const Form& obj)
{
    std::string gradeSign;
    std::string gradeExec;
    std::stringstream   ss;

    ss << obj.getGradeSign();
    ss >> gradeSign;
    ss.clear();
    ss << obj.getGradeExec();
    ss >> gradeExec;
    os << obj.getName();
    if (obj.getSign())
        os << ", signed, ";
    else
        os << ", not signed, ";
    os << "grade to sign " << gradeSign << ", grade to execute " << gradeExec; 
    return (os);
}
#include "../includes/ShruberryCreationForm.hpp"
#include <fstream>
#include <iostream>

ShruberryCreationForm::ShruberryCreationForm()
:Form("shruberryCreationForm", 145, 137, "shruberryCreationTarget")
{
    std::cout << "ShruberryCreationForm default constructor called" << std::endl;
}

ShruberryCreationForm::~ShruberryCreationForm()
{
    std::cout << "ShruberryCreationForm default destructor called" << std::endl;    
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm& src)
:Form(src.getName(), src.getGradeSign(), src.getGradeExec(), src.getTarget())
{
    std::cout << "ShruberryCreationForm copy constructor called" << std::endl;
}

ShruberryCreationForm& ShruberryCreationForm::operator= (const ShruberryCreationForm& src)
{
    this->setSign(src.getSign());
    std::cout << "ShruberryCreationForm copy assignment called" << std::endl;
    return (*this);
}

ShruberryCreationForm::ShruberryCreationForm( const std::string target)
:Form("shruberryCreationForm", 145, 137, target)
{
    std::cout << "ShruberryCreationForm constructor called" << std::endl;
}

void    ShruberryCreationForm::beExecuted() const
{
    std::fstream    fs;
    std::string     fileName;
    char    *ptr;

    fileName = this->getTarget() + "_shruberry";
    ptr = &fileName[0];
    fs.open(ptr, std::fstream::out | std::fstream::app);
    if (!fs.is_open() || fs.bad())
        return ;
    fs << ".@@@ ........ @@....@@....." << std::endl;
    fs << "....@@ ..... @ .... @ ....." << std::endl;
    fs << ".....\\@\\....@ .... @ ......" << std::endl;
    fs << "@@@.. @@@@@  @@@@@@___....." << std::endl;
    fs << "....@-@..@ ..@......@@@\\..." << std::endl;
    fs << "@@@@\\...@ @ ........\\@@@@.." << std::endl;
    fs << "......@  @@ /@@@@@........." << std::endl;
    fs << "........@-@@@@............." << std::endl;    
    fs << "..........@@ .............." << std::endl;
    fs << "......... @@ .............." << std::endl;
    fs << "......... @@ .............." << std::endl; 
    fs << ".........@@ ..............." << std::endl;
    fs << "........ @@ ..............." << std::endl; 
    fs << ".........@@@ .............." << std::endl;
    fs << "......... @@@ ............." << std::endl;
    fs << "..........@@@ ............." << std::endl;
    fs << "..........@@@@@............" << std::endl; 
    fs << "..........@@@@@@@.........." << std::endl;
    fs << "..........................." << std::endl;
    fs.close();
    return ;
}

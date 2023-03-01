#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <string>

class Intern
{
    private:
        void    initializeFormMaking(Form* (*[3]) (std::string), std::string[3]);
    public:
        Intern();
        ~Intern();
        Intern(const Intern&);
        Intern& operator= (const Intern&);
        Form    *makeForm(std::string, std::string);
        static Form *createShruBerryForm(std::string);
        static Form *createRobotomyForm(std::string);
        static Form *createPresidentialForm(std::string);
};
#endif
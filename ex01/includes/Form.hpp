#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>

class   Bureaucrat;

class   Form
{
    private:
        const std::string   _name;
        bool          _sign;
        const int           _gradeSign;
        const int           _gradeExec;
    public:
        Form();
        ~Form();
        Form(const Form&);
        Form& operator= (const Form&);
        Form(const std::string, const int, const int);
        std::string getName() const;
        bool    getSign() const;
        int     getGradeSign() const;
        int     getGradeExec() const;
        void    beSigned(const Bureaucrat&);
        class GradeTooHighException: public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char* what() const throw();
        };
};
std::ostream& operator<< (std::ostream&, const Form& obj);
#endif
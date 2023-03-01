#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>

class   Bureaucrat;

class   Form
{
        const std::string   _name;
        bool          _sign;
        const int           _gradeSign;
        const int           _gradeExec;
        const std::string   _target;
        virtual void    beExecuted() const = 0;
    public:
        Form();
        virtual ~Form();
        Form(const Form&);
        Form& operator= (const Form&);
        Form(const std::string, const int, const int, std::string);
        std::string getName() const;
        bool    getSign() const;
        void    setSign(bool);
        int     getGradeSign() const;
        int     getGradeExec() const;
        std::string getTarget() const;
        void    beSigned(const Bureaucrat&);
        void    execute(Bureaucrat const & executor) const;
        class GradeTooHighException: public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char* what() const throw();
        };
        class FormNotSignedException: public std::exception
        {
            virtual const char* what() const throw();
        };
};
std::ostream& operator<< (std::ostream&, const Form& obj);
#endif
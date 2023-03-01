#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>

class   Bureaucrat
{
    private:
        const std::string _name;
        int         _grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat&);
        Bureaucrat& operator= (const Bureaucrat&);
        Bureaucrat(std::string, int);
        std::string getName() const;
        int getGrade() const;
        void    incrementGrade();
        void    decrementGrade();
        class GradeTooHighException: public std::exception
        {
            virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            virtual const char* what() const throw();
        };
};
std::ostream& operator<< (std::ostream&, const Bureaucrat& obj);
#endif
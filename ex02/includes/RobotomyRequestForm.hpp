#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    private:
        void    beExecuted() const;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm&);
        RobotomyRequestForm& operator= (const RobotomyRequestForm&);
        RobotomyRequestForm(const std::string);
};

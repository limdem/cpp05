#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        void    beExecuted() const;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm&);
        PresidentialPardonForm& operator= (const PresidentialPardonForm&);
        PresidentialPardonForm(const std::string);
};

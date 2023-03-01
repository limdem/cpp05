#include "Form.hpp"

class ShruberryCreationForm: public Form
{
    private:
        void    beExecuted() const;
    public:
        ShruberryCreationForm();
        ~ShruberryCreationForm();
        ShruberryCreationForm(const ShruberryCreationForm&);
        ShruberryCreationForm& operator= (const ShruberryCreationForm&);
        ShruberryCreationForm(const std::string);
};


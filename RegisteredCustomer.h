#include"NonRegisteredCustomer.h"
#include "Payment.h"
#include "review.h"
#include "Admin.h"

class RegisteredCustomer :public NonRegisteredCustomer
{
    private:
        char regCustUsername[10];
        char regCustPassword[10];
        payment *payments[2];
        review *review1;
        Admin *admin1;

    public:
        RegisteredCustomer();
        RegisteredCustomer(const char pUsername[], const char pPassword[], int pId, const char pName[], const char pAddress[], const char pEmail[], const char pPhno[]);
        void displayDetails();
        void login();
        void logout();
        char checkLoginDetails();
        ~RegisteredCustomer();       
};
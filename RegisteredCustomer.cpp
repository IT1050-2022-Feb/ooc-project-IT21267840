#include "RegisteredCustomer.h"
#include <iostream>
#include <cstring>

//Default constructor
RegisteredCustomer::RegisteredCustomer()
{
strcpy(regCustUsername, "");
strcpy(regCustPassword, "");
}

//Constructor with parameters
RegisteredCustomer::RegisteredCustomer(const char pUsername[], const char pPassword[], int pId, const char pName[], const char pAddress[], const char pEmail[], const char pPhno[]) : NonRegisteredCustomer(pId, pName, pAddress, pEmail, pPhno)
{
strcpy(regCustUsername, pUsername);
strcpy(regCustPassword, pPassword);
}

void RegisteredCustomer::displayDetails()
{
}
void RegisteredCustomer::login()
{
}
void RegisteredCustomer::logout()
{
}

char RegisteredCustomer::checkLoginDetails()
{
return 0;
}

//Destructor
RegisteredCustomer::~RegisteredCustomer()
{
}

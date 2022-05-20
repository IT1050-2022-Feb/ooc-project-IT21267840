#include "NonRegisteredCustomer.h"
#include <iostream>
#include <cstring>

//Default constructor
NonRegisteredCustomer::NonRegisteredCustomer()
{
    nonRegCustID = 0;
    strcpy(nonRegCustName, "");
    strcpy(nonRegCustAddress, "");
    strcpy(nonRegCustEmail, "");
    strcpy(nonRegCustPhoneNo, "0000000000");
}

//Constructor with parameters
NonRegisteredCustomer::NonRegisteredCustomer(int pId, const char pName[], const char pAddress[], const char pEmail[], const char pPhno[])
{
    nonRegCustID = pId;
    strcpy(nonRegCustName, pName);
    strcpy(nonRegCustAddress, pAddress);
    strcpy(nonRegCustEmail, pEmail);
    strcpy(nonRegCustPhoneNo, pPhno);
}

void NonRegisteredCustomer::searchHotelRooms()
{
}
void NonRegisteredCustomer::registerdCustomer()
{
}
void NonRegisteredCustomer::displayDetails()
{
}

//Destructor
NonRegisteredCustomer::~NonRegisteredCustomer()
{
}
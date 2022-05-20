#include"NonRegisteredCustomer.h"
#include <iostream>
#include <cstring>
using namespace std;

int main(){
   
    NonRegisteredCustomer *nonRegCust1;
    nonRegCust1 = new NonRegisteredCustomer(); //Object-RegisteredCustomer class


    //calling methods of registeredCustomer Class
    nonRegCust1->searchHotelRooms();
    nonRegCust1->registerdCustomer();
    nonRegCust1->displayDetails();

  //Deleting dynamic objects
    delete nonRegCust1;
  
    return 0;

}

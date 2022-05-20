#include"NonRegisteredCustomer.h"
#include <iostream>
#include <cstring>
#include "manager.h"
#include "review.h"
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
 manager *manager1;
    manager1 = new manager();//manager
//calling methods of manager class
    manager1->updateManagerDetails();
    manager1->deleteManagerDetails();
    manager1->displayManagerDetails();

 //calling methods of review class
    review1->displayReview();

delete manager1;
delete review1;
 return 0;

}
     
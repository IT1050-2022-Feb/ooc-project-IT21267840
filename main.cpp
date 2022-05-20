#include"NonRegisteredCustomer.h"
#include "hotel.h"
#include <iostream>
#include <cstring>
#include "manager.h"
#include "review.h"
using namespace std;

int main(){

    //Creating objects
    hotel * hotel1;
    hotel1 = new hotel(12,"hotel_name", "hotel_des", "hotel_type", "hotel_address"); // object hotel class
   
    NonRegisteredCustomer *nonRegCust1;
    nonRegCust1 = new NonRegisteredCustomer(); //Object-RegisteredCustomer class

     /*calling  Methods */
  
    // Calling methods of hotel class
    hotel1->add_Hotel_details();
    hotel1->update_hotel_details();
    hotel1->delete_hotel_details();



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

//Deleting dynamic objects
    delete hotel1;
    delete manager1;
    delete review1;


 return 0;

}
     
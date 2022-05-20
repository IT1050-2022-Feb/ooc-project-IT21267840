#include <iostream>
#include <cstring>

#include"NonRegisteredCustomer.h"
#include "hotel.h"
#include "Admin.h"
#include "manager.h"
#include "review.h"
#include "Receptionist.h"
#include "Report.h"

using namespace std;

int main(){

    //Creating objects
    hotel * hotel1;
    hotel1 = new hotel(12,"hotel_name", "hotel_des", "hotel_type", "hotel_address"); // object hotel class
   
    NonRegisteredCustomer *nonRegCust1;
    nonRegCust1 = new NonRegisteredCustomer(); //Object-RegisteredCustomer class
  
    Admin *admin1;
    admin1 = new Admin();//admin

    Report *report1[2];
    report1[0] = new Report();
    report1[1] = new Report();// report

    Receptionist *rec1;
    rec1 = new Receptionist();// receptionist

    manager *manager1;
    manager1 = new manager();//manager

    review *review1;
    review1 = new review();//review 
  

     /*calling  Methods */
  
    // Calling methods of hotel class
    hotel1->add_Hotel_details();
    hotel1->update_hotel_details();
    hotel1->delete_hotel_details();

    //calling methods of Receptionist class
    rec1->CheckRoomAvailability ();
    rec1->BookRoom();
    rec1->GenerateBill();

    //calling methods of registeredCustomer Class
    nonRegCust1->searchHotelRooms();
    nonRegCust1->registerdCustomer();
    nonRegCust1->displayDetails();

    //calling methhods of admin class
    admin1->setdetails();
    admin1->Displaydetails();

    //calling methods of report class
    report1[0]->updateReport();
    report1[0]->displayReport (); 
    report1[0]->deleteReport ();
  
    report1[1]->deleteReport ();
    report1[1]->deleteReport ();
    report1[1]->deleteReport ();

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
    delete admin1;
    delete report1[2];
    delete report1[1];
    delete nonRegCust1;
    delete rec1;


 return 0;

}
     
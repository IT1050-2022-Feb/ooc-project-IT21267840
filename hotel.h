#include "room.h"
#include "reservation.h"
#include "manager.h"
#define size 2
class hotel
{
private:
    int hotelID ;
    char hotelName[15];
    char hotelDescription[20] ;
    char hotelType[10] ;
    char hotelAddress[25];

    room *room1[size];
    reservation *reserve1[size];
    manager *manager1;
public:
    hotel();
    hotel(int h_id,const char *h_name,const char *h_description,const char *h_type,const char *h_address);
    void add_Hotel_details() ;
    void update_hotel_details() ;
    void delete_hotel_details();
    ~hotel();
};
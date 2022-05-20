#include "hotel.h"
#include <iostream>
#include <cstring>
using namespace std;
hotel ::hotel(){
    hotelID = 0;
    strcpy(hotelName," ");
    strcpy(hotelDescription," ");
    strcpy(hotelType," ");
    strcpy(hotelAddress, " ");
    room1[0] = new room();
    room1[1] = new room();
    reserve1[0] = new reservation();
    reserve1[1] = new reservation();
}
hotel ::hotel(int h_id,const char *h_name,const char *h_description,const char *h_type,const char *h_address){
    hotelID = h_id;
    strcpy(hotelName, h_name);
    strcpy(hotelDescription, h_description);
    strcpy(hotelType,h_type);
    strcpy(hotelAddress, h_address);
}

void hotel ::add_Hotel_details(){

}
void hotel ::update_hotel_details(){

}
void hotel ::delete_hotel_details(){

}
hotel::~hotel(){
  for(int i = 0 ; i < size ; i ++)
    {
      delete room1[i];
    }
  for(int i = 0; i < size ; i++)
    {
      delete reserve1[i];
    }

}
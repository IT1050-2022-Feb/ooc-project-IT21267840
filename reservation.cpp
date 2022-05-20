#include "reservation.h"
#include <iostream>
#include <cstring>
using namespace std;

reservation ::reservation(){
  reservationID = 0;
  strcpy(reservation_description," ");
  strcpy(reservation_date, " ");
}
reservation :: reservation(int reserveID, const char *reserve_desc, const char *reserve_date){
  reservationID = reserveID;        
  strcpy(reservation_description,reserve_desc);
  strcpy(reservation_date,reserve_date);
}

void reservation ::setReservation(){
  
}
void reservation ::updateReservation(){
  
}
void reservation ::deleteReservation(){
  
}
void reservation:: displayReservation(){
  
}
reservation::~reservation(){
  
}


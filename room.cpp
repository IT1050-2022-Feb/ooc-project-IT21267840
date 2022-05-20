#include "room.h"
#include <iostream>
#include <cstring>
using namespace std;
room ::room(){
    roomID = 0;
    strcpy(roomType," ");
    strcpy(roomDescription," ");
}
room ::room (int r_id,const char *r_type,const char *r_description){
    roomID = r_id;
    strcpy(roomType, r_type);
    strcpy(roomDescription, r_description);
}
void room ::addRoom(){

}
void room ::updateRoom(){

}
void room ::deleteRoom(){

}
room ::~room(){

}
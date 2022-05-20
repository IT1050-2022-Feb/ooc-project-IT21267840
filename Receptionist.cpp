#include"Receptionist.h"
#include <iostream>
#include<cstring>

Receptionist::Receptionist (){
 Receptionist_ID = 0;
 strcpy ( Receptionist_name , "");
  strcpy (Receptionist_email ,"");
}

void Receptionist::addRecDetails(int RecID , const char *RecName , const char *RecEmail){
  Receptionist_ID = RecID;
  strcpy (Receptionist_name , RecName);
  strcpy (Receptionist_email , RecEmail);
}

void Receptionist:: CheckRoomAvailability (){
  
}
void Receptionist:: BookRoom(){
    
  }
void Receptionist:: MaintainCusomerDetails(){
    
  }
void Receptionist:: GenerateBill(){
    
  }
Receptionist:: ~Receptionist(){
  
}

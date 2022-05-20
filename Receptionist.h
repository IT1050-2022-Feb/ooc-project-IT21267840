#include "manager.h"
#include "room.h" 

class Receptionist{
private:
  int Receptionist_ID;
  char Receptionist_name [50];
  char Receptionist_email[20];
  room *rooms[2];
  manager *manager1;

public:
  Receptionist ();
  void addRecDetails (int RecID , const char *RecName , const char *RecEmail);
  void CheckRoomAvailability ();
  void BookRoom();
  void MaintainCusomerDetails();
  void GenerateBill();
  ~Receptionist();

};
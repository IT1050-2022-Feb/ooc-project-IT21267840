#include "Receptionist.h"
class room{
  private:
    int roomID;
    char roomType[20];
    char roomDescription[25];
    Receptionist *rec1;

  public:
    room();
    room(int r_id,const char *r_type, const char 
     *r_description);
    void addRoom() ;
    void updateRoom () ;
    void deleteRoom() ;
    ~room();
};
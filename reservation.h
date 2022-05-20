#include "Payment.h"

class reservation {
  private:
  int reservationID ;
  char reservation_description[20];
  char reservation_date[10];
  payment *payment1;

  public:
  reservation();
  reservation(int reserveID, const char *reserve_desc, const char *reserve_date);
  void setReservation();
  void updateReservation();
  void deleteReservation();
  void displayReservation();
  ~reservation();
};
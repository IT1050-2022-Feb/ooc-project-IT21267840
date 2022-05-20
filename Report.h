#include "Payment.h"

#define size 2
class Report {
private:
  int Report_ID;
  char Report_description [50];
  payment *payment1[size];
  
public:

  Report();
  void addReportDetails ( int RepID , const char *RepDescription);
  void updateReport ();
  void displayReport (); 
  void deleteReport ();
  ~Report ();

};

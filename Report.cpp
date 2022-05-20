#include "Report.h" 
#include <iostream>
#include <cstring>

Report::Report(){
    Report_ID = 0;
    strcpy(Report_description,"");
    pay1[0] = new payment();
    pay1[1] = new payment();
}

void Report :: addReportDetails ( int RepID , const char *RepDescription){
  Report_ID = 0;
  strcpy(Report_description, RepDescription);
}
void Report:: updateReport(){
  
}
void Report::displayReport(){
  
}
void Report::deleteReport(){
  
}
Report::~Report(){
  
}
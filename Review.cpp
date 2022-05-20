#include "review.h"
#include<cstring>
#include <iostream>
using namespace std;

review:: review (int reNo,const char * review_email,const char * review)
{
    reviewNo= reNo;
    strcpy(email, review_email );
    strcpy(reviewMessage , review );
}
void review::displayReview(){
  
}
review::~review()
{
  
}

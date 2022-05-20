#include "Admin.h"
#include <iostream>
#include <cstring>


Admin :: Admin()
{
    Admin_ID = 0;
    strcpy (Admin_Username,"");
    strcpy (Admin_Password,"");
    Contact_Number = 0;
          	
}
Admin :: Admin(int adminid,const char *ad_username,const char *psw , int admin_contact)
{
     Admin_ID = adminid;
     strcpy (Admin_Username,"ad_username");
     strcpy (Admin_Password,"ppsw");
     Contact_Number = admin_contact; 

}

void Admin :: setdetails()
{
	
	
}
void Admin :: Displaydetails()
{
	
	
}
Admin ::~Admin()
{
	
	
}
  		   

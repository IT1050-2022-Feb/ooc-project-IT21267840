#include "RegisteredCustomer.h"

class Admin
{

  private :
       int Admin_ID ;
       char  Admin_Username[20];
       char  Admin_Password[20];
       int  Contact_Number;
      RegisteredCustomer *regcustomer[2];
       
  	public :
  		Admin();
  		Admin(int adminid,const char *ad_username,const char *psw , int admin_contact);
  		void setdetails();
  		void Displaydetails();
  		~Admin();
  		
};
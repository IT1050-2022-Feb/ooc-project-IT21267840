#include "Payment.h"
#include <iostream>
#include <cstring>


payment ::payment()
{
  	 payment_ID =0;
  	 strcpy( payment_Type,"");
  	 payment_Amount = 0;
}

payment ::payment(int pID,const char payType[],double payAmount )
{
  	 payment_ID =pID;
  	 strcpy( payment_Type,"payType");
  	 payment_Amount = payAmount;
}

void payment::checkPayament()
{
	
}

void payment::confirmPayment()
{
	
}

void payment::displayPaymentDetails()
{
	
}

payment::~payment()
{
	
}


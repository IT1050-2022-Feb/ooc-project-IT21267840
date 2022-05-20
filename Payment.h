class payment
{
	private :
		int payment_ID;
		char payment_Type[20];
		double payment_Amount;
		
	
	public :
		payment();
		payment(int pID, const char *payType,double payAmount);
		void checkPayament();
		void confirmPayment();
		void displayPaymentDetails();
		~payment();
	
};
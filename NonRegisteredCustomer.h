class NonRegisteredCustomer
{
	protected:
        int nonRegCustID;
        char nonRegCustName[20];
        char nonRegCustAddress[30];
        char nonRegCustEmail[30];
        char nonRegCustPhoneNo[10];
    
	public:
        NonRegisteredCustomer();
        NonRegisteredCustomer(int pId, const char pName[], const char pAddress[], const char pEmail[] ,const char pPhno[]);
        void searchHotelRooms();
        void registerdCustomer();
        virtual void displayDetails();
        ~NonRegisteredCustomer();      
};
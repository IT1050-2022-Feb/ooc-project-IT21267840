#include<cstring>
#include"manager.h"
manager::manager(){
    managerId = 0;
    strcpy(managerName,"");
    strcpy(managerEmail,"");
}
void manager::addManagerDetails(int maId,const char *maName,const char *maEmail){
    managerId = maId;
    strcpy(managerName,maName);
    strcpy(managerEmail,maEmail);
}

void updateManagerDetails()
{
  
}
void deleteManagerDetails()
{
  
}
void displayManagerDetails()
{
  
}
manager::~manager()
{
  
}

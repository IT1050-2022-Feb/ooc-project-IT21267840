private:
int managerId;
char managerName[20];
char managerEmail[20];
public:
  manager();
    void addManagerDetails(int maId,const char *maName,const char *maEmail);
  void updateManagerDetails();
  void deleteManagerDetails();
  void displayManagerDetails();
  ~manager();
};

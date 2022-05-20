class Admin{
private:
 int adminID;
 string adminName;
 string password;
 
public:
 Admin();
 Admin(int p_adminID, string p_adminName, string p_password);
 void editDetails();
 void addUsers();
 void removeUsers();
 ~Admin();
};
Admin::Admin(){
 adminID = 0;
 strcpy(adminName,"");
 strcpy(password,"");
}
Admin::Admin(int p_adminID, string p_adminName, string p_password){
 adminID = p_adminID;
 strcpy(adminName, p_adminName);
 strcpy(password, p_password);
}
void Admin::editDetails(){
}
void Admin::addUsers(){
}
void Admin::removeUsers(){
}
Admin::~Admin(){
}
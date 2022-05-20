#include <iostream>
#include <cstring>
#define SIZE 5
using namespace std;
class Admin;
class User;
class Judger;


class Judger{
private:
 int JudgerID;
 string Name;
 string password;
 
public:
 Judger();
 Judger(int p_JudgerID, string p_Name, string p_password );
 void makeFeedback();
};
Judger::Judger(){
 JudgerID = 0;
 strcpy(Name,"");
 strcpy(password,"");
}
Judger::Judger(p_JudgerID, string p_Name, string p_password){
 JudgerID = p_JudgerID;
 strcpy(Name, p_Name);
 strcpy(password, p_password);
 
}

void Employee::makeFeedback(){
}

Judger::~Judger(){
}
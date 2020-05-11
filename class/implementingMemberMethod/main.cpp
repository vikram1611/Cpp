#include <iostream>
#include <string>
#include "Account.hpp"

using namespace std;

class Player
{
private:
  string name;
  int health;
  
public:
//implementing inside class
Player(string nameval = " ", int healthval = 1){
    name = nameval;
}

void setName(string nameval){
    name = nameval;
}

void talk(string text){
    cout<<"Player "<< name <<" says " <<text<<endl;
}
  
    
};

class 
{
    string t;
    
}obj1; //anaomynous class everthing public default access public

class checkSize
{
    
};

int main()
{
    Account *accountObj = new Account;
    
    accountObj->setName("vikram");
    accountObj->setBalance(100.00);
    accountObj->accountInfo();
    
    //empty empObj;
    
    std::cout<<"size of "<<sizeof obj1<<endl;
	delete accountObj;
    
    Player obj;
    
    checkSize objcheckSize;
    
    std::cout<<"size of checkSize"<<sizeof objcheckSize<<endl;
    
    
    
    
	return 0;
}

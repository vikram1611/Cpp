#ifndef _Account_H
#define _Account_H
#include <iostream>
#include <string>

class Account
{
    
private:
  std::string name;
  double balance;
  std::string text;

public:
     Account(std::string nameval = "defalutName", double bal = 0.0, std::string testVal = "");
    ~Account();// Destructor- special method, same name as class preceeded by ~
    //Invoked when object destroyed
    //no returntype and parameter
    //cannot be overloaded
    // 1 destructor per class
    void accountInfo();

};

#endif // _Account_H

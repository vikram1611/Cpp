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
     //constructor special method, same name as class
    //Invoked when object created
    //used to insilize member attibute
    //no returntype
    //can be overloaded
    Account(); //Default Constructor
    Account(std::string nameVal);//overloaded contructor provided then default constructor will not be provided
    //Need to explicitly define default constructor
    
    //Constructor insilization list
    Account(std::string nameVal, double bal, std::string textVal);
    Account(std::string nameVal, std::string testVal);
    ~Account();// Destructor- special method, same name as class preceeded by ~
    //Invoked when object destroyed
    //no returntype and parameter
    //cannot be overloaded
    // 1 destructor per class
    void accountInfo();

};

#endif // _Account_H

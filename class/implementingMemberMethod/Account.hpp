#ifndef _Account_H_
#define _Account_H_
#include <iostream>
#include <string>

using namespace std;

class Account
{

private:
  string name;
  double balance;
  
public:
//implementing inside class

void setName(string nameval);
void setBalance(double bal);

void accountInfo();
    
};



#endif // _Account_H_

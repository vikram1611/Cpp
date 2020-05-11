#include "Account.hpp"

//implementing outside class

void Account::setName(string nameVal){
    name = nameVal;
}

void Account::setBalance(double bal)
{
    balance =bal;
}

void Account::accountInfo()
{
    cout<<"hello "<<name<<" your balcnce is : "<<balance<<endl;
}


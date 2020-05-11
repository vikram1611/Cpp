#include "Account.hpp"

Account::Account():Account{"",0.0,""}
{
    name = "vikram";
    balance = 1000.00;
    std::cout<<"Default constr"<<std::endl;
}

Account::Account(std::string nameVal){
    name = nameVal; //assigment not intlization
    balance = 1000.00;
}

Account::Account(std::string nameVal, double bal, std::string textVal): name{nameVal}, balance{bal}, text{textVal}{
     std::cout<<"para constructor"<<std::endl;
}

//Delegating constructor
Account::Account(std::string nameVal, std::string textVal):Account {nameVal, 0.0, textVal}{
    std::cout<<"Delegating constructor"<<std::endl;
}

Account::~Account()
{
    std::cout<<"Destructor called "<<name<<std::endl;
}

void Account::accountInfo()
{
    std::cout<<"Hi " <<name<<" your balance is "<<balance<<std::endl;
}




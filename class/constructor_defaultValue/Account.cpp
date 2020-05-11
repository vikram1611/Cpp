#include "Account.hpp"



Account::Account(std::string nameVal, double bal, std::string testVal): name{nameVal}, balance{bal}, text{testVal}{
     std::cout<<"para constructor"<<std::endl;
}



Account::~Account()
{
    std::cout<<"Destructor called "<<name<<std::endl;
}

void Account::accountInfo()
{
    std::cout<<"Hi " <<name<<" your balance is "<<balance<<std::endl;
}




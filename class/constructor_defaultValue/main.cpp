#include <iostream>

#include "Account.hpp"

int main()
{
	Account obj;
    obj.accountInfo();
    
    Account obj1("hello");
    obj.accountInfo();
    
    return 0;
}

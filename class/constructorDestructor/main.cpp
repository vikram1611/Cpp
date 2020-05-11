#include <iostream>

#include "Account.hpp"

int main()
{
	Account obj;
    obj.accountInfo();
    
    Account *aObj = new Account("vikramOverloaded");
    aObj->accountInfo();
    delete aObj; //pointer to object need to deleted explicity to call destructor else leaking memory
	
    Account objIntilizer("VikramIntilizer", 100.00, "spme");
    objIntilizer.accountInfo();
    
    Account objDele("VikramDele", "spme");
    objDele.accountInfo();
    
    return 0;
}

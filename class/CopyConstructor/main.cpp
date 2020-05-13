#include <iostream>
#include <string>

using namespace std;

class Person
{

    
public:
    string name {};
    int age {};
    Person(string nameVal = "vikram", int ageVal = 10);
    Person(const Person &T);
    void display(Person T);
    //Person returnObj();
    ~Person();
    
};

Person::Person(string nameVal, int ageVal): name {nameVal}, age {ageVal}{
    cout<<"Para constructor"<<endl;
}

Person::Person(const Person &T): name {T.name}, age {T.age}{
    cout<<"copy constructor"<<endl;
}

void Person::display(Person T){
    
    cout<<"Name "<<T.name<< " age "<<T.age<<endl;
}

Person returnObj(){
    Person obj {"reutnPerson", 20};
    cout<<"Return Obj"<<endl;
return obj;
}

Person::~Person(){
    cout<<"destructor with name "<< name<<endl;
}

int main()
{
    //Person obj;
    //Person objCopy {obj}; //constructing constructor from another constructor
    
    //Person obj1("same");
    //obj1.display(obj1); //Passing obj to function
    
    Person returnPerson = returnObj();
    cout<< "returnPerson "<<returnPerson.name<<endl;
    //returnPerson =  //return obj 
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

/**********String**************
 * String is a class in STL
 * Declaring String creates object
 * Not intilizing string doest not store garbage value
 * Need to include library string
 * Stored in contigious in memory
 * Dynamic size
 * can be converted to c-style string
 * safer- check for bound check*/
int main( )
{
  // Declare and intilize
    string s1 {"hello"};
    cout<<s1<<endl;
    cout<<"Hello World"<<endl;
    
    string s2 {"Vikram"};
    string s3 {s1};
    string s4 {s1,3};
    string s5 {s2, 0, 3};
    string s6 (10, 'x');
    
//Assignment

    string s7;
    s7 = "Hello World";
    
    //Conctation

s7 = s1 + s2;

//s7 = "Hello" + "world"; // + operator work for string object not for string literal 
    
// Access [ ] or at
    string value {"Access find"};
    value[0]; 
    value.at(0);
    
    /// string Function
    
    cout<<"Substring "<< value.substr(1, 3)<<endl;
    cout<<"find "<< value.find("find")<<endl; //return first index of string
    cout<<"erase "<<value.erase(1,3)<<endl; 
    //cout<<"clear "<< value.clear()<<endl;
    value = "Access find";
    cout<<"length "<<value.length()<<endl;
    string str_insert = "Hello World";
    str_insert.insert(11, " xyx");
    cout<< "Insert "<< str_insert<<endl;
    str_insert.swap(value);
    cout<< "Swap "<< str_insert<<endl;
     if(value.find("Jack") == string::npos)
         cout<<"True"<<endl;
    else
         cout<<"false"<<endl;
    
    string str_function = "Check for replace";
    str_function += " Hello"; //append
    
    str_function.append(" check");
     cout<<"Append "<< str_function<< endl;
     
     str_function.assign("Hellow");
     
     cout<<"Assign "<< str_function<< endl;
     
     cout<<"back "<< str_function.back()<< endl;
     
     basic_string<char> str(str_function.begin(), str_function.end());
     cout<<"basic_string "<<str<< endl;
     
     cout<<"data "<<str_function.data()<<endl;
     
    
    
	return 0;
}

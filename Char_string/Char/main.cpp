//C-Style String

/* Sequence of charecter
    Stored Contiguous in memory
    implemented as array of charcter - Access indiual element using aray subscript sysntax "[]"
    Terminated by a null char "Refferd to zero(ASCII) or null terminated string \n"
     
String literal - Ex "Hello World"
    Sequence of char in double quotes
    Are constant
    terminated by null char*/

#include <iostream>
#include <cstring> //For c-style string function
#include <cctype> // for character based function
using namespace std;
int main()
{
	cout<<"Hello World"<<endl;
    // " Hello world" is string literal ending with null char it consist of 11 char but complier alloctes 12 char to array

    /*char my_name[ ] {"Frank"};
    cout<<"Size: "<< strlen(my_name)<<endl;
    //my_name[5] = 'y';
    cout<<"my_name "<< my_name<<endl;*/
    
   /* char my_name1[8] {"Frank"};
    my_name1[5] = 'y';
    cout<<"my_name "<< my_name1<<endl;*/
    
    /*char my_name[ 8 ]; 
   // my_name = "VIkram"; //Error
    strcpy(my_name, "VIkram"); //OK
    cout<<"my_name "<< my_name<<endl*/
    
    /*char first_name[8];
    cout<<"My first name: "<< first_name<<endl; //Garbage value as uninitilized*/
    
    /*char first_name [] { }; // Always give size or intilize char
    char last_name [] { };*/
    
    char first_name [8] { }; // Always give size or intilize char
    char last_name [8] { };
    char full_name [50] { };
    char temp [20] { };
    
    cout <<"Enter First name: ";
    cin>> first_name;
    
    cout <<"Enter last name: ";
    cin>> last_name;
    
    cout <<"--------"<<endl;
    
    cout<<" Hello "<< first_name<< " your name has "<< strlen(first_name)<<" character"<<endl; //strlen reteurn size_t
    cout<<" and your last name "<< last_name<< " has "<<strlen(last_name)<<" character"<<endl;
    
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    
    cout<<"Your full name: "<<full_name<<endl;
    
    cout<< "Enter full name: ";
   // cin>> full_name; //incase of c style string space exist only input char before space
    cin.getline(full_name, 50);
    cout<<"Your full name: "<<full_name<<endl; 
    
    cout <<"---------str cmp------------"<<endl;
    
    strcpy(temp, full_name);
    
    if(strcmp(temp, full_name)==0)
        cout<<"Same"<<endl;
    else
        cout<<"Diffrent"<<endl;
	return 0;
}

#include <iostream>
#include <vector> // Always add include library when using vector

//Refrence: https://en.cppreference.com/w/cpp/container/vector

using namespace std;
int main()
{
	// Vectors
    /* Is part of C++ standard emplate library
     Vector is container(collection of object or primitive type)
      Declare vector crate object
    stored in contiguously in memory
     Vector has same syntax and symantics like array
     Vector can grow and shink (dynamic in nanture)
     Bound checking when using at but donot when using []
    Doesnot contain garbage value default value for int is insilitzed to zero*/
    
    //Declaring vector
    // vector <type> name_vector;
      vector<char> vowels;
      vector<int> test_score;
   //Declaring vector using construtor 
    vector<char> vowels_constructor (5); //size is 5
    vector<int> test_score_constructor(10); // size is 10
    
 // intilization
     vector <char> vowels_init {'a', 'e', 'i'}; //intilzation using intilzater list
     vector <int> test_score_init {1,2,3,4,5} ;
     vector <double> high_temp (365, 80.0); // constructor style initlization 365 is size and all elements have value 80.0
     
 /* Accesing vector
    Two way to access elements
    1 vector_name [element_index] -- no bound check
    2  vector_name.at(element_index) -- bound check happen */ 
    
    cout<< "value at 1::" << test_score_init[1]<<endl;
    cout<< "No bound check::" << test_score_init[9]<<endl;
    //cout<< " bound check::" << test_score_init.at(5)<<endl;
    cout<< "size of vector"<<" "<< test_score_init.size()<<endl;
    
    
/* Changing content or element value
   vector_name.at(element_index) = 0;*/
   test_score_init.at(1) = 3;
   cout<< "value at 1::" << test_score_init[1]<<endl;
   
   
   /* Adding new element
    Vector_name.pushback(element_value)
    vector automatically allocate values*/
    test_score_init.push_back(50);
    
     cout<< "size of vector"<<" "<< test_score_init.size()<<endl;
     
     
     // 2-D vector
     
     //Syntax
     // vector <int> name --> vector <vector<int>> name
      vector <vector<int>> movie_rating
      {
         {1,2,3,4},
         {3,4,5,6}
     };
     
     cout<<"Movie_rating " << " "<< movie_rating[0][2]<<endl;
      cout<<"Movie_rating " << " "<< movie_rating.at(0).at(0)<<endl;
      
	return 0;
}

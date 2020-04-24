#include <iostream>

using namespace std;

int main()
{
   
     /* Array is compound type (is a type which is made of other type) or linear data structure
       collection of similar type
       Each element is of similar type
       store in contigious memory(chunck of memeory)
       Fixed size cannot change size
       Elements are accesed using index or position
       First element index 0
       Last element index size -1
       No bound checked
       Always initlize array as it will contain garbage value
       Array element can be accesed using o(1) complexity
       Search 0(log n)*/
    
     
	// Array Declaration
    // Element_type array_name[Constant number of array];
    
    int test_score_uninitlized [5]; // not intilized
    
    int test_score [5] {1,2,3,4,5};
    
    int high_scroe [10] {3,5}; // First two element are initlized to 3 , 5 and rest are initlized two zero

   int scroe [2] {0}; // All element are intlized to 0,similar to int score [2] {};

    int auto_cal_size [ ] {1,2,3,4,5}; //Size od array is auto matically calculated 5 is size
    
    /* Accesing indivisual array elemeny */
    
    cout<< "First score of test score:"<< " "<<test_score[0]<<endl;
    
    //Changing content of array
    test_score[0] = 0;
     cout<< "First score of test score updated:"<< " "<<test_score[0]<<endl;
     
     /* Array
      * Name of array represent location/address of first element of array in memory (index 0)
      * [ index]-subscript operator with index represent offset from begining of array
      *  No bound Checking*/
      
      // Array name example
      cout<<"Name of array: "<< test_score<< endl;
      // No bound check example
       cout<< "No bound Check for array in c++ given garbage value if index is out of range:"<< " "<<test_score[10]<<endl;
	
     int size_array = sizeof(test_score)/sizeof(test_score[0]);
       
     cout<<"size of array: "<< size_array<< endl;
    
	return 0;
}

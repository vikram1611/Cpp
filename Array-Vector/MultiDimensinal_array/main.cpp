#include <iostream>
using namespace std;
int main()
{
	// Declaring Multi-dimensional arrays and inilizing
    //Element_type array_name [dim1_size]  [dim2_size]
    
    int movie_rating [3] [4]{
      {0, 1, 3, 4},
      {1, 2, 4, 6},
      {5, 6, 7, 8}
    };
    
    // Accesing element
    
    cout<< movie_rating[0] [2]<<endl;
    
	return 0;
}

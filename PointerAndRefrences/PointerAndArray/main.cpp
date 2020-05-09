#include <iostream>

using namespace std;

int main()
{
	int score [] {100, 95, 80};
    
    cout << "Value of score " << score<<endl;
    
    int *score_ptr {score};
    cout << "Value of score_ptr " << score_ptr<<endl;
    
    cout << "Array subscript notation ----------------"<<endl;
    
    cout<<"score[0] "<< score[0]<<endl;
    
    cout << "Pointer subscript notation ----------------"<<endl;
    cout<<"score_ptr[0] "<< score_ptr[0]<<endl;
    
    cout << "Pointer offset notation ----------------"<<endl;
    cout<<"*score_ptr "<< *score_ptr<<endl;
    cout<<"*(score_ptr+1) "<< *(score_ptr+1)<<endl;
    
     cout << "Array offset notation ----------------"<<endl;
     
     cout<<"*score "<< *score<<endl;
     cout<<"*(score+1) "<< *(score+1)<<endl;
    
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int *p {nullptr};
    
    p = new int{10}; //allocating memmory on heap
    
    cout<<"Value of p " << p <<endl;
    
    cout<<"Address of p " << &p <<endl;
    
    delete p; //deallocating memory
    
    cout<<"-----------------------------------"<<endl;
    
    double *array_ptr {nullptr};
    
    size_t size;
    
    cout<< "size of array ";
    cin>>size;
    
    array_ptr = new double[size];
    
    cout<<"Address of "<<array_ptr<<endl;
    
    delete [] array_ptr;
	return 0;
}

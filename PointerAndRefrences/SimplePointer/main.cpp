#include <iostream>
#include <vector>
#include <string>

using namespace std;

int * poinet()
{
    int x {10};
    
    return &x;
}

int main()
{
    
    int * returValue = poinet();
    
    cout <<"returValue "<<*returValue<<endl; 
	int num {10};
    cout<<"Value of num "<<num<<endl;
    cout<<"Size of num "<<sizeof num<<endl;
    cout<<"Address of num "<<&num<<endl;
    
    cout<<"------------------------"<<endl;
    
    int *p {&num};
    
    cout<<"Value of p "<<p<<endl;
    cout<<"Size of p "<<sizeof p<<endl;
    cout<<"Address of p "<<&p<<endl;
    
    p = 0;
    p = nullptr;
    //p = 1;
    
    cout<<"Value of p "<<p<<endl;
    cout<<"------------------------"<<endl;
     
    int *p1 {nullptr};
    double *p2 {nullptr};
    char z = 'a';
    string x {"number"};
    char *p3 = &z;
    
    cout<<"Size of p1 "<<sizeof p1<<endl;
    cout<<"Size of p2 "<<sizeof p2<<endl;
    cout<<"value of p3 "<<p3<<endl;
    cout<<" of p3 "<<&p3<<endl;
    
    cout<<"------------------------"<<endl;
    
    int score {100};
    
    int *scorePtr {&score};
    
    cout<<"Value of scorePtr "<<scorePtr<<endl;
    cout<<"Address of score "<<&score<<endl;
    
    cout<<"------------------------"<<endl;
    
    cout<<"Defrencing pointer"<<endl;
    
    vector<string> name {"vikram", "Negi"};
    
    vector<string> *name_ptr {nullptr};
    
    name_ptr = &name;
    
    cout<<"Value at name 0 index "<<name.at(0)<<endl;
    name_ptr->at(0) = "India";
    cout<<"Value at name 0 index "<<name_ptr->at(0)<<endl;
    
    cout<<"Value "<<name_ptr<<endl;
    cout<<"Address  "<<&name_ptr<<endl;
    
    cout<<"Address name  "<<&name<<endl;
    cout<<"Test name  "<<(*name_ptr).at(0)<<endl;
    for(auto x : *name_ptr)
        cout<<"value of x "<<x<<endl;
        
   int zx {10};
   int yx;
   
   int arr [1];
   
   int *parr {arr};
   int *parr1 {arr};
   
   

	return 0;
}

#include <iostream>
#include <string>

using namespace std;

class shallow
{
private:
    int *data ;
public:
    
    shallow(int val){
        data = new int;
        *data = val;
    }
    
    //shallow(const shallow &T): data {T.data}{} //shallow copy
    
    shallow(const shallow &T): shallow{*(T.data)} {} //deep copy
    
    int getValue() {
        return *data;
    }
    
    void setValue(int val){
        *data = val; 
    }
    void display1() const
    {
        cout <<"Data "<<endl;
    }
    
    ~shallow(){
        delete data;
        cout<<"Destructor"<<endl;
    }
};

void display(shallow T)
    {
        cout <<"Data "<< T.getValue()<<endl;
    }

int main()
{
	shallow obj{10};
    
    
    display(obj);
    
    const shallow obj2{20};
    obj2.display1();
    
    /*shallow obj1{obj};
    
    obj1.setValue(90);
    display(obj1);*/
    
	return 0;
}

#include <iostream>
#include <memory>


using namespace std;

class moveClass{
    
private:
    int x {};
    std::unique_ptr <int> p ;
    string val {};
public:

    moveClass(int xval = 10){
        
    }

    moveClass(moveClass && T): x{std::move(T.x)}, p {std::move(T.p)}, val {std::move(T.val)}{
        
        //cout<<"value "<<x<<" "<< p<<" " << val<<endl;
        //cout<<" pointer "<<T.p<<endl;
    }
    
    moveClass &operator=(moveClass &&T){
       x = std::move(T.x); 
       p = std::move(T.p); 
       val = std::move(T.val);
       cout<<"value "<<x<<" "<< &p<<" " << val<<endl;
       cout<<" pointer "<<&T.p<<endl;
    }

    
};

int main()
{
	moveClass obj;
    moveClass obj1;
    obj1 = std::move(obj);
    
	return 0;
}

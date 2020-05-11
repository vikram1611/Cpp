#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
  string name;
  int health;
public:
void talk(string text){
    cout<<"Player "<< name <<" says " <<text<<endl;
}
  
    
};

int main()
{
    Player obj;
    Player *pointerObjet = new Player; //pointer to object
    
    //obj.name = "vikram"; //compiler error
    //pointerObjet->name = "vikram"; //compiler error
    //(*pointerObjet).name = "vikram"; //compiler error
    
    obj.talk("using dot operator");
    pointerObjet->talk("using pointer to object pointer operator");
    (*pointerObjet).talk("using dot operator after derefrencing pointer");
    
	
	return 0;
}

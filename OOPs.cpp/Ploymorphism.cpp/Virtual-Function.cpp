#include <iostream>
using namespace std;
class Base{
    public:
  virtual void func(){
        cout<<"Function of base "<<endl;
    }
};

class Derived:public Base{
    public:
    void func(){
        cout<<"Function of derived class "<<endl;
    }
};
int main(){
    Base *p=new Derived;
    p->func();
    return 0;
}
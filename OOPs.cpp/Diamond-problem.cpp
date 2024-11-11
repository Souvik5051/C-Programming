#include <iostream>
using namespace std;

class A{
  public:
   int chemistry;
  A(){
    this->chemistry=101;
  }
};
class B{
  public:
   int chemistry;
  B(){
    this->chemistry=102;
  }
};

class C:public A,public B{
  public:
   int maths;
};
int main() 
{
  C obj;
  
  cout<<obj.A::chemistry<<" "<<obj.B::chemistry;
    return 0;
}
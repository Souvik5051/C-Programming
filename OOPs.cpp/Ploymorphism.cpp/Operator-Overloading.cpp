#include <iostream>
using namespace std;
class param{
   public:
   int val;

   void operator+(param &object2){
    int value1=this->val;
    int value2=object2.val;
    cout<<(value1-value2)<<endl;
   }

};
int main(){
    param object1,object2;
    object1.val=7;
    object2.val=2;
    //this should print the difference between them
    object1+object2;
    return 0;
}
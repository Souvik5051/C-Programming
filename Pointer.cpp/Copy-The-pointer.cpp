#include <iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    //copy the pointer
    int *dusraPtr=p;
    cout<<p<<endl;
    cout<<dusraPtr<<endl;
    cout<<*p<<endl;
    cout<<*dusraPtr<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<"Address of a is : "<<&a<<endl;
    cout<<"Value stored at ptr is : "<<ptr<<endl;
    cout<<"Value is pointing to : "<<*ptr<<endl;
    cout<<&ptr<<endl;
    return 0;
}
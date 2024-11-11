#include <iostream>
using namespace std;
int main(){
    int a=5;
    // Create a pointer
    int *ptr=&a;
    // Access the value of a we use the dereference oprator
    cout<<*ptr<<endl;
    return 0;
}
#include <iostream>
using namespace std;
void solve(int *ptr){
    
    *ptr=*ptr+10;
  
}
int main(){
    int a=5;
    int *p=&a;


    solve(p);
    cout<<"Value of a is : "<<a<<endl;
    
    return 0;
}
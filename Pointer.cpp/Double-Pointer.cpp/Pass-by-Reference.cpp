#include <iostream>
using namespace std;
//Pass by reference
void solve(int &num){
    num=50;
}
//Pass by vlaue
void passbyvalue(int num){
    num++;
}
int main(){
    int a=5;
    passbyvalue(a);
    cout<<a<<endl;
    solve(a);
    cout<<a<<endl;
   
    return 0;
}
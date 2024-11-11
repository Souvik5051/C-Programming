#include <iostream>
using namespace std;
int main(){
    char ch[9]="Sherbano";
    char *c=&ch[0];
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<*(ch+3)<<endl;
    cout<<c<<endl;
    cout<<&c<<endl;
    cout<<*(c+3)<<endl;
    cout<<*c<<endl;
    cout<<c+2<<endl;
    cout<<c+8<<endl;
    return 0;
}
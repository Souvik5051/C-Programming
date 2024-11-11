#include <iostream>
using namespace std;
int main(){
    char ch[10]="souvik";
    char *c=ch;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;

    cout<<c<<endl;
    cout<<&c<<endl;
    cout<<*c<<endl;
    cout<<*(c+3)<<endl;
    cout<<ch[3]<<endl;
    return 0;
}
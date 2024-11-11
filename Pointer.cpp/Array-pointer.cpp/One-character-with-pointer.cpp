#include<iostream>
using namespace std;
int main(){
    char ch='k';
    char* cptr=&ch;
    
    cout<<cptr<<endl; //In this case while null character is found till print the garbage value 
    return 0;
}
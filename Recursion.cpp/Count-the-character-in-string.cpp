#include <iostream>
using namespace std;

void checkkey(string str,int n,int i,char key,int& count){
    //Base Condition
    if(i>=n){
        return;
    }
    if(str[i]==key){
        count++;
    }
    checkkey(str,n,i+1,key,count);
}
int main(){
    string str="lovebabbar";
    int n=str.length();
    char key='b';
    int i=0;
    int count=0;
    checkkey(str,n,i,key,count);
    cout<<count;
    return 0;
}
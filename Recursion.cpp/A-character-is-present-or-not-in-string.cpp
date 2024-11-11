#include <iostream>
using namespace std;

bool checkkey(string str,int n,int i,char key){
    //Base Condition
    if(i>=n){
        return 0;
    }
    if(str[i]==key){
        return 1;
    }
   return checkkey(str,n,i+1,key);
}
int main(){
    string str="souvik";
    int n=str.length();
    char key='y';
    int i=0;
    bool ans= checkkey(str,n,i,key);
    cout<<ans;
    return 0;
}
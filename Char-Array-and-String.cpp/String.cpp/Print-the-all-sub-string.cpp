#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        // string str1=str[i];
        for(int j=i+1;j<str.length();j++){
             cout<<str[i]<<str[j]<<endl;
        }
    }
    return 0;
}
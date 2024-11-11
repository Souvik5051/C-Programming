#include <iostream>
using namespace std;
bool compareString(string a,string b){
    if(a.length()!=b.length()){
        return false;
    }
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i])
            return false;
        }
    }
    return true;
}
int main(){
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);
    bool c=compareString(str1,str2);
    cout<<c;
    return 0;
}
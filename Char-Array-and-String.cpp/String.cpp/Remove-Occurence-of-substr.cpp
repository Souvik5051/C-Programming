#include <iostream>
#include<string.h>
using namespace std;
string removeOccurence(string str,string part){
    int pos=str.find(part);
    while(pos!=string::npos){
        str.erase(pos,part.length());
        pos=str.find(part);
    }
    return str;
}
int main(){
    string str;
    getline(cin,str);
    string part;
    getline(cin,part);
    string a=removeOccurence(str,part);
    cout<<a;
    return 0;
}
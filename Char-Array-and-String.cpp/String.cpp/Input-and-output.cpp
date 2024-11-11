#include <iostream>
using namespace std;
int main(){
    string str;
    // cin>>str;
    // cout<<str;
    getline(cin,str);
    cout<<"String is "<<str<<endl;
    cout<<"String length is  : "<<str.length()<<endl;
    cout<<"String is empty or not "<<str.empty()<<endl;
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<str.substr(1,3)<<endl;
    string a="This is first lecture in string";
    a.replace(0,4,"that");
    cout<<a;
    return 0;
}
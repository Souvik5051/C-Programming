#include <iostream>
using namespace std;
string removeAdjacent(string str){
    string ans="";
    int i=0;
    while(i<str.length()){
        if(ans.length()>0 && ans[ans.length()-1]==str[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(str[i]);
        }
        i++;
    }
  return ans;
}
int main(){
    string str;
    getline(cin,str);
    string a=removeAdjacent(str);
    cout<<a;
    return 0;
}
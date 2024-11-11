#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

void solve(string str1,string str2,string &ans,int i,int j,int carry){
    // Base case
   
    if(i<0 && j<0 && carry==0){
        return ;
    }
    int first=0;
    int second=0;
    if(i>=0)
        first=str1[i]-'0';
    if(j>=0)
        second=str2[j]-'0';
    
    int sum=first+second+carry;
    int lastDigit=sum%10;
    carry=sum/10;
    ans.push_back(lastDigit+'0');
    solve(str1,str2,ans,i-1,j-1,carry);

}
int main(){
    string str1="32";
    string str2="45";
    string ans="";
    // string output=solve(str1,str2,ans,str1.length()-1,str2.length()-1,0);
    // reverse(output.begin(),output.end());
    reverse(ans.begin(),ans.end());
    cout<<ans;
    // cout<<output;
    return 0;
}
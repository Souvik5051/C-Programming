#include <iostream>
using namespace std;

int solve(string str1,string str2,int i,int j){
    // Base case
    if(i==str1.length()){
        return 0;
    }
    if(j==str2.length()){
        return 0;
    }
    int ans=0;
    // Match
    if(str1[i]==str2[j]){
       ans=1+solve(str1,str2,i+1,j+1);
    }
    else{
        ans=max(solve(str1,str2,i,j+1),solve(str1,str2,i+1,j));

    }
    return ans;
}
int main(){
    string str1="abcde";
    string str2="ace";

    int i=0;
    int j=0;
    int ans=solve(str1,str2,i,j);
    cout<<"LCS is: "<<ans<<endl;
    return 0;
}
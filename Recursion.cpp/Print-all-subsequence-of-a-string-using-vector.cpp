#include <iostream>
#include<vector>
using namespace std;
void subsequence(string str,vector<string>& ans,string output,int i){
if(i>=str.length()){
    ans.push_back(output);
    return;
}
//Exclude
subsequence(str,ans,output,i+1);

//Include

output=output+str[i];
subsequence(str,ans,output,i+1);




}
int main(){
    string str;
    getline(cin,str);
    string output=" ";
    vector<string>ans;
    int i=0;
    subsequence(str,ans,output,i);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<"length of the subsequence of the string : "<<ans.size() <<endl;
    return 0;
}
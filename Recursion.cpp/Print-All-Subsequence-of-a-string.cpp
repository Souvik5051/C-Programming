#include <iostream>
#include<vector>
using namespace std;

void subsequence(string str,string output,int i){
//Base condition
if(i>=str.length()){
    cout<<output<<endl;
    return;
}


//Recursive relation for exclude
//Exclude means that do nothing as it is keep the string
subsequence(str,output,i+1);

//Recursive relation for include
//Include means that adding the character with the output string

output.push_back(str[i]);
subsequence(str,output,i+1);
}
int main(){
    string str;
    getline(cin,str);
    string output=" ";
    int i=0;
    subsequence(str,output,i);
    return 0;
}







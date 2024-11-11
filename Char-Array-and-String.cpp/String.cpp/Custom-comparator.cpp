#include<iostream>
#include<vector>
#include<algorithm>
bool cmp(char a,char b){  //Custom comparator
  return a>b;
}

bool compare(int a,int b){ //Custom comparator
  return a>b;
}
using namespace std;
int main(){
string str="babbar";
sort(str.begin(),str.end(),cmp);

vector<int>v{5,3,1,4,2};
sort(v.begin(),v.end(),compare);
for(auto i:v){
cout<<i<<" ";
}
}

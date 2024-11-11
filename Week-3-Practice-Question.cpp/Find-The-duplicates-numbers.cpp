#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int printfarray(vector<int>arr){
 sort(arr.begin(),arr.end());
 for(int i=0;i<arr.size();i++){
   if(arr[i]==arr[i+1]){
     return arr[i];
   }
 }
return -1;
}

int main() {
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<arr.size();i++){
    cin>>arr[i];
  }
  cout<<printfarray(arr);
 
  return 0;
}
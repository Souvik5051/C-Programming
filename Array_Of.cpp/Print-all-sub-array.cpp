#include<iostream>
#include<vector>
using namespace std;

int main(){
   int n;
   cout<<"Enter the array size";
   cin>>n;
   vector<int>arr(n);
   cout<<"Enter the element of array ";
   for(int i=0;i<arr.size();i++){
    cin>>arr[i];
   }

   for(int i=0;i<arr.size();i++){
    for(int j=i;j<arr.size();j++){
        for(int k=i;k<j+1;k++){
            cout<<arr[k];
        }
        cout<<endl;
     }
     cout<<endl;
   }
}
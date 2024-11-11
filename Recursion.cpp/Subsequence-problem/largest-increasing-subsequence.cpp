#include <iostream>
#include<vector>
using namespace std;

int solve(vector<int>&arr,int prev,int i){
    // Base case
    if(i==arr.size()){
        return 0;
    }

    // include
    int pick=0;
    if(prev==-1 || arr[i]>arr[prev])
        pick= 1 + solve(arr,i,i+1);
    
   //Exclude
   int notPick=0;
   notPick=solve(arr,prev,i+1);
   return max(pick,notPick);

   
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    vector<int>arr(size);
    cout<<"Enter element of array: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int prev=-1,i=0;
    int ans=solve(arr,prev,i);
    cout<<"LIS is "<<ans;
    return 0;
}
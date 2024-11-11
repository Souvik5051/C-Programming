#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int subArraySum(vector<int>arr){
    int n=arr.size();
    
    int sum=0;
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
     sum+=arr[i];
     if(sum>maximum){
         maximum=sum;
     }
     if(sum<0){
        sum=0;
     }
    }
    if(maximum<0){
        maximum=0;
    }
    return maximum;
}

int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int ans=subArraySum(arr);
    cout<<ans;
    return 0;
}
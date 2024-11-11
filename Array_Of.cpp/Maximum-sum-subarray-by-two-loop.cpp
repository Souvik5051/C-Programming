#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int subArraySum(vector<int>arr){
    int n=arr.size();
    
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
           sum+=arr[j];
           if(sum>maximum){
            maximum=sum;
           }
        }
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
#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int subArraySum(vector<int>arr){
    int n=arr.size();
    
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
             int sum=0;
            for(int k=i;k<j+1;k++){
                sum+=arr[k];
                if(sum>maximum){
                    maximum=sum;
                }
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
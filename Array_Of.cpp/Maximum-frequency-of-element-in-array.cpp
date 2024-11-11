#include <iostream>
#include<vector>
using namespace std;
int maxfre(vector<int>arr){
    int maxcount=0;
    int ans;
    for(int i=0;i<arr.size();i++){
        int count=0;
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            ans=arr[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int result=maxfre(arr);
    cout<<result;
    return 0;
}
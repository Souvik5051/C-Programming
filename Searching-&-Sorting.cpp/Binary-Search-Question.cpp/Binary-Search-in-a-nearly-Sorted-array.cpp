#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==target)
            return mid;
        if(mid-1>=0 && arr[mid-1]==target)
            return mid-1;
        if(mid+1<arr.size() && arr[mid+1]==target)
            return mid+1;
        

        if(target>arr[mid]){
            //Right search
            s=mid+2;
        }
        else{
            //Left Search
            e=mid-2;
        }
        mid=(s+e)/2;
        
    }
    return -1;
}
int main(){

    vector<int>arr{10,3,40,20,50,80,70};
    int target=20;
    int ans=binarySearch(arr,target);
    cout<<"Ans is "<<ans<<endl;
}
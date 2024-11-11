#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(s==e){
            //Single element
            return s;
        }
        if(mid+1<arr.size() && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid-1>=0 && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        //Left case handle
        if(arr[s]>arr[mid]){
            e=mid-1;
        }
        //Right case handle
        if(arr[s]<arr[mid]){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{3,4,5,6,7,1,2};
    int ans=findPivot(arr);
    cout<<"Pivot element is "<<arr[ans];
    return 0;
}
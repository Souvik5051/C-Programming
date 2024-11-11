#include <iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr,int s,int e,int& key ){
   //Base Case
   if(s>e){
    return -1;
   }
   int mid=(s+e)/2;
   if(arr[mid]==key){
    return mid;
   }

   //Recursive Relation
   if(arr[mid]<key){
    int ans=binarySearch(arr,mid+1,e,key);
    return ans;
   }
   if(arr[mid]>key){
   int ans=binarySearch(arr,s,mid-1,key);
   return ans;
   }
}
int main(){
    int size;
    cout<<"Enter the arry size : ";
    cin>>size;
    vector<int>arr(size);
    cout<<"Enter the element : ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    int n=arr.size();
    int s=0;
    int e=n-1;
    int ans=binarySearch(arr,s,e,key);
    cout<<"The answer is : "<<ans<<endl;
    return 0;
}
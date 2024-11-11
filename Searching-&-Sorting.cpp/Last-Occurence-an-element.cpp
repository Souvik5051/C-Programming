#include<iostream>
#include<vector>
using namespace std;

int lastOcc(vector<int>arr,int target){
 int s=0;
 int e=arr.size()-1;
 int mid=(s+e)/2;
 int ans=-1;
 while(s<=e){
   
   if(target==arr[mid]){
    ans=mid;
    //Search in Right
    s=mid+1;
   }

   //Left search
   else if(target<arr[mid]){
    e=mid-1;
   }
   //Right search
   else if(target>arr[mid]){
    s=mid+1;
   }
   mid=(s+e)/2;
 }
 return ans;
}
int main(){
  vector<int>arr{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
  
  int target=7;
  int indexofLastOcc=lastOcc(arr,target);
  

  cout<<"Ans is "<<indexofLastOcc<<endl;
  return 0;
}
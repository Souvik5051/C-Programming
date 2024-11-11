#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int>arr,int target){
 int s=0;
 int e=arr.size()-1;
 int mid=(s+e)/2;
 int ans=-1;
 while(s<=e){
   
   if(target==arr[mid]){
    ans=mid;
    //Search in left
    e=mid-1;
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
  vector<int>arr{1,3,3,3,3,3,3,3,4,4,4,4,7,9};
  
  int target=3;
  int indexofFirstOcc=firstOcc(arr,target);
  

  cout<<"Ans is "<<indexofFirstOcc<<endl;
  return 0;
}
#include <iostream>
using namespace std;

int findPeak(int arr[],int size){
  int s=0;
  int e=size-1;
  int mid=(s+e)/2;
  while(s<e){
    if(arr[mid]<arr[mid+1]){
      s=mid+1;
    }
    else{
      e=mid;
    }
    mid=(s+e)/2;
  }
  return s;
}


int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
  int peakElement=findPeak(arr,n);
   cout<<"Peak element is "<<arr[peakElement];
    return 0;
}
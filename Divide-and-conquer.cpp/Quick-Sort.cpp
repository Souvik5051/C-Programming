#include <iostream>
#include<vector>
using namespace std;

int partition(int arr[],int s,int e){
   //step1: choose pivot element

   int pivotIndex=s;
   int pivotElement=arr[s];

   //Step2: find right position for pivot element and place it there
   int count=0;
   for(int i=s+1; i<=e;i++){
     if(arr[i]<=pivotElement){
        count++;
     }
   }

   //jab mya loop se bahar hua, toh mere pass pivot ki right position ka index ready h
   int rightIndex=s+count;

   swap(arr[pivotIndex],arr[rightIndex]);
   pivotIndex=rightIndex;

   //Step3: left me chote and right me bade element
   int i=s;
   int j=e;

   while(i<pivotIndex && j>pivotIndex){
      while(arr[i]<=pivotElement){
        i++;
      }
      while(arr[j]>pivotElement){
        j--;
      }

      //2 case ho sakte ha
      //A-> you found the elements to swap 
      //B-> no need to swap
      if(i<pivotIndex && j>pivotIndex){
        swap(arr[i],arr[j]);
      }
   }
   return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }

    //Partition logic,return pivotIndex
    int p=partition(arr,s,e);

    //recursive calls 

    //pivot element-> left
    quickSort(arr,s,p-1);


    //pivot element-> right
    quickSort(arr,p+1,e); 
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    // vector<int>arr(n);
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0,e=n-1;
    quickSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

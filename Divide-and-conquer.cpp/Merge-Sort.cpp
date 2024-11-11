#include <iostream>
#include<vector>
using namespace std;


void merge(vector<int>&arr,int s,int e){
    int mid=(s+e)/2;
    
    int len1=mid-s+1; //first array length= mid-s+1;
    int len2=e-mid; // second array length= e-mid+1-1=e-mid;
    
    //Create two new array
    int *left=new int[len1];
    int *right=new int[len2];
    
    
    //Copy the value in the two new array
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
   
    k=mid+1;
   for(int j=0;j<len2;j++){
    right[j]=arr[k];
    k++;
   }

   //Merge two array
   int leftIndex=0;
   int rightIndex=0;
   int mainArray=s;
   while(leftIndex<len1 && rightIndex<len2){
    if(left[leftIndex] < right[rightIndex]){
        arr[mainArray++]=left[leftIndex++];
        // mainArray++,leftIndex;
    }
    else{
        arr[mainArray++]=right[rightIndex++];
        // mainArray++,rightIndex++;
    }
}

    // the remaining element keep as it is in the array
    while(leftIndex<len1){
        arr[mainArray++]=left[leftIndex++];
        // mainArray++,leftIndex++;
    }
    while(rightIndex<len2){
        arr[mainArray++]=right[rightIndex++];
        // mainArray++,rightIndex++;
    }
}

void mergeSort(vector<int>&arr,int s,int e){
    //Base Condition
    //if(s==e)->Single element
    //if(s>e)->Invalid array
    if(s>=e){
        return ;
    }
    //Breaking or divide
    int mid=(s+e)/2;
    //left part sort kardo resursion bhaiya
    mergeSort(arr,s,mid);

    //Right part sort kardo recursion bhaiya

    mergeSort(arr,mid+1,e);

    //merge two part(left+right)
    merge(arr,s,e);
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr(size);
    cout<<"Enter the array element : ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int s=0;
    int n=arr.size();
    int e=n-1;
    // int arr[]={4,5,13,2,12};
    // int n=5;
    // int s=0;
    // int e=n-1;
    mergeSort(arr,s,e);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
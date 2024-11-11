#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arr,int s,int e){
    int mid=(s+e)/2;
    
    int len1=mid-s+1;
    int len2=e-mid;

    int *left=new int[len1];
    int *right=new int[len2];

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

    int leftIndex=0;
    int rightIndex=0;
    int mainArray=s;

    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainArray++]=left[leftIndex++];
        }
        else{
            arr[mainArray++]=right[rightIndex++];
        }
    }
    while(leftIndex<len1){
        arr[mainArray++]=left[leftIndex++];
    }
    while(rightIndex<len2){
        arr[mainArray++]=right[rightIndex++];
    }
}
void mergeSort(vector<int>&arr,int s,int e){
    int mid=(s+e)/2;
    if(s>=e){
        return ;
    }

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int size;
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int n=arr.size();
    int s=0;
    int e=n-1;
    mergeSort(arr,s,e);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
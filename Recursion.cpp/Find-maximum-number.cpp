#include <iostream>
#include<limits.h>
using namespace std;
void maximumNumber(int arr[],int n,int i,int& max){
    //Base Condition
    if(i>=n){
        return;
    }

    
    if(arr[i]>max){
        max=arr[i];
    }
    
       maximumNumber(arr,n,i+1,max);
    
}
int main(){
    int arr[]={23,34,12,56,66};
    int n=5;
    int i=0;
    int max=INT_MIN;
    maximumNumber(arr,n,i,max);
    cout<<"The maximum number in the array: "<<max;
    
    return 0;
}
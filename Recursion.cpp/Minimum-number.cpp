#include <iostream>
#include<limits.h>
using namespace std;
void maximumNumber(int arr[],int n,int i,int& mini){
    //Base Condition
    if(i>=n){
        return;
    }

    
   //1 case hum karenge 
   mini=min(arr[i],mini);
    
       maximumNumber(arr,n,i+1,mini);
    
}
int main(){
    int arr[]={23,34,12,56,66};
    int n=5;
    int i=0;
    int mini=INT_MAX;
    maximumNumber(arr,n,i,mini);
    cout<<"The maximum number in the array: "<<mini;
    return 0;
}
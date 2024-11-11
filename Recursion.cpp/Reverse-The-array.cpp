#include <iostream>
using namespace std;

void printArray(int arr[],int n,int i){
    //Base Condition
    if(i>=n){
        return;
    }
    //Recursive Relation
    printArray(arr,n,i+1);
    //Processing
    cout<<arr[i]<<" ";
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;
    printArray(arr,n,i);
    return 0;
}
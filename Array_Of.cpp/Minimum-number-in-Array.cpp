#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[500];
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    cout<<min;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            
            min=arr[i];
           
        }
         cout<<min<<" ";
    }
    cout<<"The minimum number in the array : "<<min;

    return 0;
}
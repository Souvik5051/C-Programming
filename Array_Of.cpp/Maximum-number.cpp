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
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The minimum number in the array : "<<max;

    return 0;
}
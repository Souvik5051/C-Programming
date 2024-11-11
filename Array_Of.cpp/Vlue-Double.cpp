#include <iostream>
using namespace std;
int main(){
    int arr[500];
    cout<<"Enter the size of array : ";
    int n;
    cin>>n;
    // Input from user
    cout<<"Enter the vlaue of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<2*arr[i]<<" ";
    }
    return 0;
}
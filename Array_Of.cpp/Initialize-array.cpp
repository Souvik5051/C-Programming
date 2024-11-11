#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    // Input from user
    cout<<"Enter the vlaue of the array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // Display the output
    cout<<"The vlaue of the array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
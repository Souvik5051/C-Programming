#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    // Binary search in vector
    vector<int>v{2,3,4,5,6,7};
    if(binary_search(v.begin(),v.end(),3)){
         cout<<"Element found ";
    }
    else{
        cout<<"Element not found";
    }


    // Binary search in array
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    if(binary_search(arr,arr+size,3)){
         cout<<"Element found in the array";
    }
    else{
        cout<<"Element not found in the array";
    }
    return 0;
}
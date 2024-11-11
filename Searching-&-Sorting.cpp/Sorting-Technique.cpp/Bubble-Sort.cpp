#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,1,7,6,14,9};
    int n=arr.size();
    //Bubble Sort
    
    for(int round=0;round<n-1;round++){
        for(int j=0;j<n-round-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    //Printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
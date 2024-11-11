#include <iostream>
#include<vector>
using namespace std;
int main(){
    // Create vector
    vector<int>arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    // Insert
    arr.push_back(3);
    arr.push_back(4);
    // Print
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    // Remove/delete
    arr.pop_back();

    // Print
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>brr(10,-1);
    cout<<brr.size()<<endl;
    cout<<brr.capacity()<<endl;
    // Print
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    vector<int>crr;
    cout<<"Verctor is empty or not "<<crr.empty()<<endl;
    return 0;
}
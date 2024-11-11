#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr{10,20,30,40,50,60,70};
    // For loop will traversal for each element
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        // For every element,will traversal on agge wallah element
        for(int j=i+1;j<arr.size();j++){
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
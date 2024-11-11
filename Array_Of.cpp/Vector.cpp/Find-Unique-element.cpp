#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter teh element  : ";
    // Taking element
    for(int i=0;i<arr.size();i++){
      cin>>arr[i];
    }
    // Unique function
    int uniqueElement=findUnique(arr);
    cout<<"The unique element is : "<<uniqueElement;
    return 0;
}
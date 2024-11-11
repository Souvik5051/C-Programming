#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int sizea=5;
    int brr[]={6,7,8,9};
    int sizeb=4;
    vector<int>ans;
    // push all element of arr
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }
    
    // push all element of arr
     for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
    }
    // Printing all elemnt 
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
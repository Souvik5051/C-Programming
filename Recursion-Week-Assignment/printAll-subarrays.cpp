#include <iostream>
#include<vector>
using namespace std;

void print(vector<int>&nums,int start,int end){
    //base case
     if(end==nums.size()){
        return;
     }

    //1 case solve
    for(int i=start;i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    //RE
    print(nums,start,end+1);
}
void printSubarray(vector<int>&nums){
    for(int start=0;start<nums.size();start++){
        int end=start;
        print(nums,start,end);
    }
}
int main(){
    vector<int>arr{1,2,3,4,5};
    printSubarray(arr);
    return 0;
}
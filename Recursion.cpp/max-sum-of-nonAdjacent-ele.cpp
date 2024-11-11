#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>&arr,int sum,int &maxi,int i){
//   Base case
   if(i>=arr.size()){
    return maxi=max(sum,maxi);
   }

   //Include
   solve(arr,sum+arr[i],maxi,i+2);

   //Exclude
   solve(arr,sum,maxi,i+1);

}
int main(){
    vector<int>arr{2,1,4,9};
    int sum=0;
    int maxi=INT_MIN;
    int i=0;
    int ans=solve(arr,sum,maxi,i);
    cout<<"The maximum of non-adjacent elements: "<<ans<<endl;
    return 0;
}


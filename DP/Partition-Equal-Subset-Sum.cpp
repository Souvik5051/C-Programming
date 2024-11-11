#include<iostream>
#include<vector>
using namespace std;

bool solveUsingMem(vector<int>arr,int index,int target,vector<vector<int>>dp){
    int n=arr.size();
    if(index>=n || target<0){
        return 0;
    }
    if(target==0){
        return 1;
    }
    if(dp[index][target]!=-1){
        return dp[index][target];
    }
    bool include=solveUsingMem(arr,index+1,target-arr[index],dp);
    bool exclude=solveUsingMem(arr,index+1,target,dp);

    dp[index][target]=include||exclude;

    return dp[index][exclude];

}
bool solveUsingTabulation(vector<int>arr,int target){
    int n=arr.size();
    vector<vector<int>>dp(n+1,vector<int>(target+1,0));

    for(int i=0;i<=arr.size();i++){
        dp[i][0]=1;
    }

    for(int index=n-1;index>=0;index--){
        for(int t=1;t<=target;t++){
            bool include=false;
            if(t-arr[index]>=0)
             include=dp[index+1][t-arr[index]];
             bool exclude=dp[index+1][t];

             dp[index][t]=include||exclude;
        }
    }
    return dp[0][target];

}
int main(){
    vector<int>arr{1,5,11,5};
    
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    if(sum%2!=0){
        cout<<"It is false"<<endl;
        return 0;
    }
    int target=sum/2;
    vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
    // bool ans=solveUsingMem(arr,0,target,dp);

    bool ans=solveUsingTabulation(arr,target);

    cout<<"Ans: "<<ans<<endl;
    return 0;
}
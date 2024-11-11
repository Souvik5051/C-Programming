#include<iostream>
#include<vector>
using namespace std;

int solveUsingRecursion(int n,int k){
    if(n==1){
        return k;
    }
    if(n==2){
        return k+(k*(k-1));
    }
    int ans=(solveUsingRecursion(n-2,k)+solveUsingRecursion(n-1,k))*(k-1);
    return ans;
}

int solveUsingMemo(int n,int k,vector<int>&dp){
    if(n==1){
        return k;
    }
    if(n==2){
        return k+(k*(k-1));
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=(solveUsingMemo(n-2,k,dp)+solveUsingMemo(n-1,k,dp))*(k-1);
    return dp[n];
}
int main(){
    int n,k;
    cout<<"Enter value of K and N"<<endl;
    cin>>n>>k;
    // int ans=solveUsingRecursion(n,k);
    // cout<<ans<<endl;
    vector<int>dp(n+1,-1);
    int ans=solveUsingMemo(n,k,dp);
    cout<<ans<<endl;
}


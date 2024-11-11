#include<iostream>
#include<vector>
using namespace std;

// index= index of last element
int solveUsingRecursion(int weight[],int value[],int index,int capacity){
    
    //Base case
    if(index==0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    //include ans exclude
    int include=0;
    if(weight[index]<=capacity){
        include=value[index] + solveUsingRecursion(weight,value,index-1,capacity-weight[index]);
    }
    int exclude=0 + solveUsingRecursion(weight,value,index-1,capacity);
    
    int ans=max(include,exclude);
    return ans;
}

int solveUsingMemoisation(int weight[],int value[],int index,int capacity,vector<vector<int>>&dp){
    //Base case
    if(index==0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    if(dp[index][capacity]!=-1){
        return dp[index][capacity];
    }
    //include ans exclude
    int include=0;
    if(weight[index]<=capacity){
        include=value[index] + solveUsingMemoisation(weight,value,index-1,capacity-weight[index],dp);
    }
    int exclude=0 + solveUsingMemoisation(weight,value,index-1,capacity,dp);
    
    dp[index][capacity]=max(include,exclude);
    return dp[index][capacity];
}
int solveUsingTabulation(int weight[],int value[],int n,int capacity){
    vector<vector<int>>dp(n,vector<int>(capacity+1,0));

    for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity){
            dp[0][w]=value[0];
        }
        else{
            dp[0][w]=0;
        }
    }
    for(int index=1;index<n;index++){
        for(int wt=0;wt<=capacity;wt++){
            // include and exclude
            int include=0;
            if(weight[index]<=wt)
              include=value[index] + dp[index-1][wt-weight[index]];
            
            int exclude=0+dp[index-1][wt];
            dp[index][wt]=max(include,exclude);

        }
    }
    return dp[n-1][capacity];
}
int main(){
    int n=3;
    int weight[]={4,5,1};
    int value[]={1,2,3};
    int capacity=4;
    
    // int ans=solveUsingRecursion(weight,value,n-1,capacity);

    // cout<<"Ans: "<<ans<<endl;

    vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
    int ans=solveUsingMemoisation(weight,value,n-1,capacity,dp);
    cout<<"Ans: "<<ans<<endl;

    return 0;
}


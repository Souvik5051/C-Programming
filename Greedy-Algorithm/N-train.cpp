#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int solve(int arr[],int dept[],int n){
    vector<pair<int,int>>data;
    for(int i=0;i<n;i++){
        data.push_back({arr[i],dept[i]});
    }
    sort(data.begin(),data.end(),cmp);
    int count=1;
    int lastdept=data[0].second;
    for(int i=1;i<n;i++){
       if(data[i].first>=lastdept){
        count++;
        lastdept=data[i-1].second;
       }
    }
    return count;
}
int main(){
    int n=4;
    int arr[]={5,8,2,4};
    int dept[]={7,11,6,5};

    int ans=solve(arr,dept,n);
    cout<<"Answer is : "<<ans;
    return 0;
}
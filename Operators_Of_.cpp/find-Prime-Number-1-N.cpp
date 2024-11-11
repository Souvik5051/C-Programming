#include<iostream>
using namespace std;
bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m;
    cout<<"Enter the number ";
    cin>>n>>m;
    for(int i=2;i<=n;i++){
        bool ans=checkPrime(i);
        if(ans && m>0){
            cout<<i<<" ";
            m--;
        }
    }
}
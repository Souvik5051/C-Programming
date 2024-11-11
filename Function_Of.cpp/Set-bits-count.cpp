#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;

    int ans=0;
    while(n!=0){
        //Found one set bit,so increment set bit count
       if( n&1 ){
        ans++;
       }
       n=n>>1;
    }
    cout<<"Number of set bits "<<ans<<endl;
}


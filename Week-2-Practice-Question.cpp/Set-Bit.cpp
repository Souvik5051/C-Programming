#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int ans=0;
    while(n!=0){
        if(n & 1){
            ans++;
        }
        n=n>>1;
    }
    cout<<"The set bit is "<<ans;
    return 0;
}
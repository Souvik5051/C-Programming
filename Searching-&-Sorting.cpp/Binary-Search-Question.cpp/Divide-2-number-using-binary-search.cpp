#include <iostream>
using namespace std;

int  solve(int dividend,int divisor){
    int s=0;
    int e=dividend;
    int mid=(s+e)/2;
    int ans=0;
    while(s<=e){
        //Perfect solution
        if(mid*divisor==dividend){
            return mid;
        }
        //Not perfect solution
        if(mid*divisor>dividend){
            //Left search 
            e=mid-1;
        }
        if(mid*divisor<dividend){
            ans=mid;
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int dividend,divisor;
    cout<<"Enter the value of divisor and dividend ";
    cin>>dividend>>divisor;
    int ans=solve(dividend,divisor);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}
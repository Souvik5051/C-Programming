#include <iostream>
using namespace std;

int  solve(int dividend,int divisor){
    int s=0;
    int e=abs(dividend);
    int mid=(s+e)/2;
    int ans=0;
    while(s<=e){
        //Perfect solution
        
        if(abs(mid*divisor)==abs(dividend) ){
            ans=mid;
            break;
        }
        //Not perfect solution
        if(abs(mid*divisor)>abs(dividend)){  //abs---->absolute value means only possitive value will received
            //Left search 
            e=mid-1;
        }
        if(abs(mid*divisor)<abs(dividend)){
            ans=mid;
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    if((dividend>0 && divisor>0)|| (dividend<0 && divisor<0) ){
        return ans;
    }
    else{
        return -ans;
    }
}
int main(){
    int dividend,divisor;
    cout<<"Enter the value of divisor and dividend ";
    cin>>dividend>>divisor;
    int ans=solve(dividend,divisor);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}
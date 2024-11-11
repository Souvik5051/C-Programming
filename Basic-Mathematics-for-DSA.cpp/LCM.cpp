#include <iostream>
using namespace std;
int gcdOfNumber(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a>0 && b>0){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a==0?b:a;
}
int lcmOfNumber(int a,int b){
    int gcd=gcdOfNumber(a,b);
    return (a*b)/gcd;
}
int main(){
    int a,b;
    cin>>a>>b;
    int lcm=lcmOfNumber(a,b);
    cout<<lcm;
    return 0;
}
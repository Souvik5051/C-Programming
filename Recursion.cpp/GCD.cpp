#include <iostream>
using namespace std;

int gcd(int num1,int num2){
    while(num1%num2!=0){
        int rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    return num2;
}
int main(){
    int num1,num2;
    cout<<"Enter the number : ";
    cin>>num1>>num2;
    int ans=gcd(num1,num2);
    cout<<ans;
    return 0;
}
#include <iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    else{
        int ans=2*power(n-1);
        return ans;
    }
}
int main(){
    int n;
    cout<<"Enter the element : ";
    cin>>n;
    int ans=power(n);
    cout<<ans;
    return 0;
}
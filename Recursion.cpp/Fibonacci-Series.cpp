#include <iostream>
using namespace std;
int fibonacci(int n){
    //Base Case
    if(n==1){
        //First Term
        return 0;
    }
    if(n==2){
        //Second Term
        return 1;
    }

    //Recursive Relation
    else{
        
        int ans=fibonacci(n-1)+fibonacci(n-2);
        return ans;
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans=fibonacci(n);
    cout<<n<<"th term is: "<<ans<<endl;
    return 0;
}
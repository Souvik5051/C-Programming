#include <iostream>
using namespace std;

int alternateSum(int num){
    if(num==0){
        return 0;
    }
    else if(num%2==0){
        return alternateSum(num-1)-num;
    }
    else{
        return alternateSum(num-1)+num;
    }
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int ans=alternateSum(num);
    cout<<"The ans of slternate sum is : "<<ans<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int countDigit(int n){
    if(n==0){
        return 0;
    }
   
    return 1+countDigit(n/10);

}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int ans=countDigit(num);
    cout<<"The number of digit is : "<<ans<<endl;
    return 0;
}
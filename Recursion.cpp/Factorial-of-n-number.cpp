#include <iostream>
using namespace std;
int factOfNumber(int n){
    cout<<"Function is called n "<<n<<endl;
    //Base Condition
    if(n==1){
        return 1;
    }
    //Recursive relation
    else{
        int ans= n*factOfNumber(n-1);
        return ans;
    }
    
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int fact=factOfNumber(n); 
    cout<<fact;
    return 0;
}
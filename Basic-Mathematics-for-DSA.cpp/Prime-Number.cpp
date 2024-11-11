#include <iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    if(n==0) return 0;
    vector<bool>prime(n,true);//All element marked as true that means all element is prime
    prime[0]=prime[1]=false;//As we know that 0 and 1 is not prime number so we marked false
    int ans=0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;
            int j=2*i;
            while(j<n){
                prime[j]=false;
                j=j+i;
            }
        }
       
    }
return ans;
}
int main(){
    int n;
    cin>>n;
    int count=countPrime(n);
    cout<<count<<endl;
    return 0;
}
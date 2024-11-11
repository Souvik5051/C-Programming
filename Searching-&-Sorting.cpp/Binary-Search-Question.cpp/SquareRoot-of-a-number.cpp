#include<iostream>
using namespace std;

int sqrt(int n){
    int target=n;
    int s=0;
    int e=n;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        
        if(mid*mid>target){
            //Search in left
            e=mid-1;
        }
        if(mid*mid<target){
            //Store ans
            ans=mid;
            //Right search
            s=mid+1;
        }
        mid=(s+e)/2;
    }
 return ans;
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int ans=sqrt(n);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}
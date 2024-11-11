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
    int precision;
    cout<<"Enter the number of floating digits in precision "<<endl;
    cin>>precision;

    double step=0.1;
    double finalans=ans;
    for(int i=0;i<precision;i++){
        for(double j=finalans;j*j<=n;j=j+step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"Final ans is "<<finalans<<endl;
    return 0;
}
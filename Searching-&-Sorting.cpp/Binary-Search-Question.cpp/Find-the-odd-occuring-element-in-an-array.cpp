#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(s==e){
            //Single case
            return s;
        }

        //2 case->mid-even or mid-odd
        //mid-Even
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                //Right search
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        //mid-Odd
        else{
            if(arr[mid]==arr[mid-1]){
                //Right search
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    mid=(s+e)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans=solve(arr);
    cout<<"Index is "<<ans<<endl;
    cout<<"Value is "<<arr[ans];
}
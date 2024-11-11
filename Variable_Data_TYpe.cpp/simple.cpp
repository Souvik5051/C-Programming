#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter the length of the array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the value : "<<endl;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
      int groupsize;
    cout<<"Enter the groupsize : "<<endl;
    cin>>groupsize;
    int count=0;
    for(int i=0;i<n;i++){
      count++;
    }
    // int groupsize;
    // //cout<<"Enter the groupsize : "<<endl;
    // cin>>groupsize;
   if(count%groupsize==0){
     int rev=count/groupsize;
     for(int i=0;i<n;i++){
       for(int j=rev;j>=0;j--){
         cout<<a[j];
       }
     }
   }
   else{
     cout<<"It is not divided any group ";
   }
    return 0;
}
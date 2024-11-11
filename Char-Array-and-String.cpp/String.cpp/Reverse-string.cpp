#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number ";
  cin>>n;
  int sq=n*n;
  int rem,i=1,fn=0;
   int flag=0;
  while(sq>0){
    rem=sq%10;
    fn=fn+rem*i;
    sq=sq/10;
   
    if(sq+fn==n){
     flag=1;

    }
  
    i=i*10;
  }                      
 if(flag){
  cout<<"Yes";
 }
 else{
  cout<<"No";
 }
}
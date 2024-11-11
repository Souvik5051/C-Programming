#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5,5,6};

  cout<<arr<<endl;
  cout<<arr[0]<<endl;
  cout<<&arr<<endl;
  cout<<&arr[0]<<endl;

  int *ptr=arr;

  cout<<ptr<<endl;
  cout<<&ptr<<endl;
  return 0;
}
#include <iostream>
using namespace std;
int  util(int* p ){
  //  p=p+1;
 *p=*p+1;
 
}

int main() {
  int a=5;
  int *p=&a;
  
  cout<<"Before : "<<endl;
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<*p<<endl;
  util(p);
  cout<<endl<<"After : "<<endl;
  cout<<a<<endl;
  cout<<p<<endl;
  cout<<*p<<endl;
  return 0;
}
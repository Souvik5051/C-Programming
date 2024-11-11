#include <iostream>
using namespace std;
int  util(int** ptr ){
//  ptr=ptr+1;
//  *ptr=*ptr+1;
    **ptr=**ptr+1;
 
}

int main() {
  int a=5;
  int *p=&a;
  int **q=&p;
  util(q);
  cout<<a<<endl;
  return 0;
}
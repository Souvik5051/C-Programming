#include <iostream>
using namespace std;
int main(){
   int first,second,third,fourth,fifth;
   int n=12345;

   first=n/10000;
   n=n%10000;
   second=n/1000;
   n=n%1000;
   third=n/100;
   n=n/100;
   fourth=n/10;
   fifth=n%10;

   int sum=first+fourth;
   cout<<"Sum of the first and fourth digit : "<< sum <<endl;

    return 0;
}
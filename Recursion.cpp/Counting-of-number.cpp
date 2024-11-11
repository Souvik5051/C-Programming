#include <iostream>
using namespace std;
void countOfNumber(int n){
    //Base Condition
   if(n==0)
    return;
   
   //Processing
   cout<<n<<" ";

   //Recursive Relation
   countOfNumber(n-1);

}
int main(){
    int n;
    cout<<"Enter the element : ";
    cin>>n;
    countOfNumber(n);
    return 0;
}


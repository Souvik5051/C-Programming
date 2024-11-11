#include <iostream>
using namespace std;
void printNumber(int n){
    //Base Case
    if(n==0){
        return;
    }
    

    //Bakki case Recursion samahal lega or Recursion Relation
    printNumber(n/10);

    //1 case main solve karunga 
    int newdigit=n%10;
    cout<<newdigit<<endl;

}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    printNumber(n);
    return 0;
}
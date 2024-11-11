#include <iostream>
using namespace std;
int main(){
    int arr[500];
    int size;
    int countZeo=0;
    int countOne=0;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
      if(arr[i]==0){
        countZeo++;
      }
      if(arr[i]==1){
        countOne++;
      }
    }
    cout<<"The number of Zero is  "<<countZeo<<endl;
    cout<<"The number of one is  "<<countOne<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int arr[3][4];
    int rows=3;
    int cols=4;
    // input
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    // Printing Rows wise
    cout<<"Printing the array in row wise"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Printing column wise
    cout<<"Printing the array column wise : "<<endl;
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
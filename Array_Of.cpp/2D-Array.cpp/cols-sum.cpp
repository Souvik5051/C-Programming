#include <iostream>
using namespace std;
void rowWiseSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[j][i];
        }
    cout<<sum<<endl;
    }
   
}
int main(){
    int arr[3][3];
    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
   rowWiseSum(arr,row,col);
    return 0;
}
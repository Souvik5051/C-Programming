#include<iostream>
using namespace std;

void transpose(int arr[][3],int r,int c,int transposeArray[][3]){
for(int i=0;i<r;i++){
  for(int j=0;j<c;j++){
   transposeArray[j][i]=arr[i][j];
  }
}
}

void printArray(int transposeArray[][3],int r,int c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<transposeArray[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int row=3,col=3;
  int arr[3][3];
  cout<<"Enter the value : ";
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cin>>arr[i][j];
    }
   }

int transposeArray[3][3];
   printArray(arr,row,col);
   cout<<endl;
   transpose(arr,row,col,transposeArray);
   cout<<endl;
   printArray(transposeArray,row,col);
  return 0;
}
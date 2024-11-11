#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int size=2*n-1;
    int mat[size][size];
    
    int top=0;
    int right=2*n-1-1;
    int bottom=2*n-1-1;
    int left=0;

    while(n>0){
        for(int i=left;i<=right;i++){
        mat[top][i]=n;
    }
    for(int i=top;i<=bottom;i++){
        mat[i][right]=n;
    }
    for(int i=right;i>=left;i--){
       mat[bottom][i]=n;
    }
    for(int i=bottom;i>=top;i--){
        mat[i][left]=n;
    }

    top++;
    right--;
    bottom--;
    left++;
    n--;
    }
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}
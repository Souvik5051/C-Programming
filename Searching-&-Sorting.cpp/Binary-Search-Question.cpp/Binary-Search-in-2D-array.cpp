#include <iostream>
using namespace std;

bool binarySeach(int arr[][4],int row,int col,int target){
    int s=0;
    int e=row*col-1;
    int mid=(s+e)/2;
    while(s<=e){
        int rowIndex=mid/col;
        int colIndex=mid%col;
        if(arr[rowIndex][colIndex]==target){
            cout<<"Found at "<<rowIndex<<" "<<colIndex<<endl;
            return true;
        }
        //Search in Left
        if(target<arr[rowIndex][colIndex]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return false;
}
int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int row=5;
    int col=4;
    
    int target=19;
    int ans=binarySeach(arr,row,col,target);
    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found";
    }
    return 0;
}
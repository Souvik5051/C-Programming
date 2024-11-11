#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the vlaue : ";
    cin>>n;
    for(int row=0;row<n;row++){
       for(int col=0;col<n-row-1;col++){
        cout<<" ";
       }
       for(int col=0;col<2*row+1;col++){
        //   First character
        if(col==0){
            cout<<"*";
        }
        else if(col==2*row){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
    }
    return 0;
}











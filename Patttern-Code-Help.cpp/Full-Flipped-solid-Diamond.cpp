#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the vlaue : ";
    cin>>n;
    // Flipped-Solid-Diamond
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        for(int col=0;col<2*row+1;col++){
            cout<<" ";
        }
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Ulta flipped solid diamond
     for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        for(int col=0;col<2*n-2*row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
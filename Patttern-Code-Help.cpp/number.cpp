/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    // cout<<"Enter the vlaue : ";
    for(int row=1;row<=n;row++){
        for(int col=1;col<=2*row-1;col++){
            if(col%2==0){
                cout<<"*";
            }
            else{
                cout<<row;
            }
        }
        cout<<endl;
    }
    // piramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<row+1;
    //         if(col!=row){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // // ulta piramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<n-row;
    //         if(col!=n-row-1){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    return 0;
}
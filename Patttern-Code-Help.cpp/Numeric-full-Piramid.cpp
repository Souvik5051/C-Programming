#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    for(int row=0;row<n;row++){
        // For space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        // For number
        for(int col=0;col<row+1;col++){
            cout<<row+col+1;
        }
        // For reverse
        int start=2*row;
        for(int col=0;col<row;col++){
            cout<<start;
            start--;
        }
        cout<<endl;
    }

    return 0;
}

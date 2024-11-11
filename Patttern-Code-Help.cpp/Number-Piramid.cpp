
#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"Enter the value : ";
   cin>>n;
  for(int row=0;row<n;row++){
      int start=row+1;
      for(int col=0;col<row+1;col++){
          cout<<start;
          start--;
      }
       for(int col=0;col<row;col++){
                cout<<col+2;
    }
      cout<<endl;
  }
// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//             if(row==0){
//                 cout<<" ";
//             }
//             else{
//                 cout<<col+2;
//             }
//     }
//     cout<<endl;
// }

    return 0;
}
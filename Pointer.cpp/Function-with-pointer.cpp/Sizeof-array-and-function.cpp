#include <iostream>
using namespace std;
void solve(int arr[]){

cout<<"Size inside solve function "<<sizeof(arr)<<endl;

 cout<<"arr: "<<arr<<endl;
 cout<<"&arr: "<<&arr<<endl;

    arr[0]=50;
}
int main(){
    int arr[10]={1,2,3,4,5};

    //Sizeof the array
    cout<<"Size inside main function "<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;

    //Printing array inside main
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl<<endl<<endl<<"Now calling solve function "<<endl;

    solve(arr);

    cout<<"wapas main function me aagye h "<<endl;
     for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
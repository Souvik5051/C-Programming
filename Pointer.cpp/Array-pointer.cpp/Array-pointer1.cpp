#include <iostream>
using namespace std;
int main(){
    int arr[4]={12,44,66,88};
    cout<<*arr<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[1]<<endl;
    cout<<*(arr+2)<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+3)<<endl;
    cout<<arr[3]<<endl;
    //Same method
    int i=0;
    cout<<arr[i]<<endl; //12
    cout<<i[arr]<<endl; //12
    cout<<*(arr+i)<<endl; //12
    cout<<*(i+arr)<<endl; //12
    return 0;
}
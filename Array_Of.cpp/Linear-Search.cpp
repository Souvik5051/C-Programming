#include <iostream>
using namespace std;

bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
            return true;
            break;
    }
    return false;
}
int main(){
    int arr[500];
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to find : ";
    cin>>key;
    if(find(arr,size,key)){
        cout<<"Found "<<endl;
    }
    else{
        cout<<"Not found";
    }
    return 0;
}
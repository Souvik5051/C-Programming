#include <iostream>
#include<string.h>
using namespace std;
void upperToLower(char arr[]){
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]>='A'&& arr[i]<='Z'){
         arr[i]=arr[i]-'A'+'a';
        }
    }
}
int main(){
    char arr[100];
    cin>>arr;
    upperToLower(arr);
    cout<<"Lower case is "<<arr;
    return 0;
}


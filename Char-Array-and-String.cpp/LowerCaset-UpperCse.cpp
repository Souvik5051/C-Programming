#include <iostream>
#include<string.h>
using namespace std;
void lowerToUpper(char arr[]){
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]>='a'&& arr[i]<='z')
         arr[i]=arr[i]-'a'+'A';
    }
}
int main(){
    char arr[100];
    cin>>arr;
    lowerToUpper(arr);
    cout<<"Upper case is "<<arr;
    return 0;
}
#include <iostream>
#include<string.h>
using namespace std;
void replaceSpace(char name[]){
    int len=strlen(name);
    for(int i=0;i<len;i++){
        if(name[i]==' '){
            name[i]='@';
        }
    }
}
int main(){
    char name[100];
    cin.getline(name,100);
    replaceSpace(name);
    cout<<"Printing sentence"<<endl<<name<<endl;
    return 0;
}
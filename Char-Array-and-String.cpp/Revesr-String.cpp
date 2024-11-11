#include <iostream>
using namespace std;
int getLength(char name[]){
    int length=0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}

void reveseString(char name[]){
    int i=0;
    int n=getLength(name);
    int j=n-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}
int main(){
    char name[100];
    cin>>name;
    cout<<"Length is : "<<getLength(name)<<endl;
    cout<<"Initially string is "<<name<<endl;
    reveseString(name);
    cout<<"After swaping the string "<<name;
    return 0;
}
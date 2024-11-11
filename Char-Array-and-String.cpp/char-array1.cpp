#include <iostream>
using namespace std;
int main(){
    char name[100];
    cin>>name;
    for(int i=0;i<7;i++){
        cout<<"Index "<<i<<" vlaue "<<name[i]<<endl;
    }

    cout<<"The ASCII value of Null character "<<(int)name[6]<<endl;
    return 0;
}
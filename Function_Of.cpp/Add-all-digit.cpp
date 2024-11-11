#include <iostream>
using namespace std;
int main(){
    int digit[]={8,2,3};
    int ans=0;
    for(int i=0;i<3;i++){
        ans=ans*10+digit[i];
    }
    cout<<ans<<endl;
    return 0;
}
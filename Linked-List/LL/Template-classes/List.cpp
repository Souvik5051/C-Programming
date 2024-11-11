#include <iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1={1,2,3,4,5};
    auto itr=l1.begin();
    for(auto num:l1){
        cout<<num<<" ";
    }
    return 0;
}
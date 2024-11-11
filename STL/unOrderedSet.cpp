#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(10);
    s.insert(35);
    s.insert(11);
    s.insert(15);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}
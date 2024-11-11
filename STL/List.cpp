#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    list<int>l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_front(50);

    // print all values from list -->50 10 20 30 40
    for(auto it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // reverse  printing 
    for(auto it=l1.rbegin();it!=l1.rend();it++){
        cout<<*it<<" ";
    }
    return 0;
}
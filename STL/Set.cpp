#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(210);
    s.insert(10);
    s.insert(220);
    s.insert(230);
    s.insert(110);
    s.insert(20);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // for increasing order
     set<int,greater<int>>s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(210);
    s1.insert(10);
    s1.insert(220);
    s1.insert(230);
    s1.insert(110);
    s1.insert(20);
     
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // Searh any element
    if(s1.find(210)!=s1.end()){
        cout<<"present";
    }
    else{
        cout<<"Absent";
    }
    // for delete any element from set
    s1.erase(210);
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}
#include <iostream>
#include <bits/stdC++.h>
using namespace std;
int main(){
    // pair<string,int>p;
    // Two method to insert value in pair

    // p=make_pair("souvik",30);
    // p.first="souvik";
    // p.second=30;
    //cout<<p.first<<" "<<p.second<<endl;


    //name,age,weight
    pair<string,pair<int,int>>p;
    // p=make_pair("souvik",make_pair(12,23));

    p.first="souvik";
    p.second.first=12;
    p.second.second=34;

    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    return 0;
}
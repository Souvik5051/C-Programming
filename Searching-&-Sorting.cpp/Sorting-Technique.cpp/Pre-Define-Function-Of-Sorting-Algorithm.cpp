#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     vector<int>v{10,1,7,6,14,9};
     sort(v.begin(),v.end());
     
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
    return 0;
}
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
      vector<int>v{1,3,3,3,3,3,3,3,4,4,4,4,7,9};
      //First Occurence of an element by using the in build function
      int target=3;
      auto ans=lower_bound(v.begin(),v.end(),target);
      
      cout<<"Ans is "<<ans-v.begin()<<endl;

    
      //Last Occurence of an element by using the in build function
      
      auto ans2=upper_bound(v.begin(),v.end(),target);
      
      cout<<"Ans is "<<ans2-v.begin()<<endl;
      
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;


int main(){
int arr[]={1,2,4,6,8,10};
int sizea=6;
int brr[]={3,4,5,6};
int sizeb=4;

vector<int>ans;    

for(int i=0;i<sizea;i++){

  int element=arr[i];
  for(int j=0;j<sizeb;j++){
    if(element==brr[j]){
     brr[j]=-1; 
        
    }
  }
}

for(int i=0;i<sizea;i++){
  ans.push_back(arr[i]);
}
for(int i=0;i<sizeb;i++){
  if(brr[i]!=-1){
    ans.push_back(brr[i]);
  }
}


for(int i=0;i<ans.size();i++){
 cout<<ans[i];
}

return 0;
}
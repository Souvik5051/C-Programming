#include <iostream>
using namespace std;
int add(int a,int b){
    int c=a+b;
    return c;
}
int sub(int a,int b){
    int c=a-b;
    return c;
}
int mul(int a,int b){
    int c=a*b;
    return c;
}
int division(int a,int b){
    int c=a/b;
    return c;
}
void result(int a,int b,int(*p)(int ,int )){
   cout<<(*p)(a,b);
}

int main(){
    int x,y;
    cin>>x>>y;
    result(x,y,add);
    return 0;
}
#include <iostream>
#include<stack>
using namespace std;
int main(){
    
    //Create a stack
    // stack<int>st;

    // //Insertion operation
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // //Remove operation
    // st.pop();
    
    // //check element on top
    // cout<<"Element on the top is: "<<st.top()<<endl;

    // //Size of stack
    // cout<<"Size of stack : "<<st.size()<<endl;

    // //Check stack is empty or not
    // if(st.empty()){
    //     cout<<"Stack is empty";
    // }
    // else{
    //     cout<<"Stack is not empty ";
    // }

    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int>st;
    //Step1: put all element of Q into Stack
    while(!q.empty()){
        int element=q.front();
        q.pop();

        st.push(element);
    }
    //Step2: put all element from stack into q
    while(!st.empty()){
        int element=st.top();
        st.pop();
        q.push(element);
    }

}

void reverseQueueRecursion(queue<int> &q){
    //Base case
    if(q.empty()){
        return;
    }
    //Step A
    int temp=q.front();
    q.pop();

    //Step B: recursion call
    reverseQueueRecursion(q);

    //Step C
    q.push(temp);
}

int main(){
    queue<int>q;

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    // reverseQueue(q);
    reverseQueueRecursion(q);
    cout<<"Printing queue "<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
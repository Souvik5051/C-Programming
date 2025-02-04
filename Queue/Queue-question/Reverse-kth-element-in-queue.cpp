#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseKthElement(queue<int> &q,int k){
    //Step1: queue ->k elements -> stack
    stack<int>st;
    int count=0;
    int n=q.size();

    if(k<=0 || k>n){
        return;
    }
    
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        st.push(temp);
        count++;

        if(count==k){
            break;
        }
    }
    //Step2: stack -> queue me qapas
    while(!st.empty()){
        int temp=st.top();
        st.pop();
        q.push(temp);

    }
    //Step3: push n-k element from q front to back
    count=0;
    while(!q.empty() && n-k !=0){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count==n-k){
            break;
        }
    }

}
int main(){
    queue<int>q;

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverseKthElement(q,5);
    cout<<"Printing element"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
#include <iostream>
#include<queue>
using namespace std;

int main(){

    //Max Heap
    // priority_queue<int>pq;

    // pq.push(3);
    // pq.push(6);
    // pq.push(9);
    // pq.push(4);
    // pq.push(8);


    // cout<<"Top element : "<<pq.top()<<endl;
    // pq.pop();
    // cout<<"Top element : "<<pq.top()<<endl;
    // pq.pop();
    // cout<<"Top element : "<<pq.top()<<endl;
    // pq.pop();
    // cout<<"Top element : "<<pq.top()<<endl;
    // pq.pop();
    // cout<<"Top element : "<<pq.top()<<endl;
    // pq.pop();
    // cout<<"Size: "<<pq.size()<<endl;
    // if(pq.empty()){
    //     cout<<"Max heap is empty ";
    // }
    // else{
    //     cout<<"Max heap is not empty";
    // }


    // Min heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);
    
    cout<<"top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Size: "<<pq.size()<<endl;
    cout<<"top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"top element: "<<pq.top()<<endl;
    pq.pop();
    
    if(pq.empty()){
        cout<<"Max heap is empty ";
    }
    else{
        cout<<"Max heap is not empty";
    }
    
    return 0;
}
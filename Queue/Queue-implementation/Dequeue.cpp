#include <iostream>
using namespace std;

class Deque{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    //PushRear operation
    void pushRear(int data){
          //Queue Full
    if(front==0 && rear==size-1){
        cout<<"Q is full, cannot insert";
        return;
    } 
    //single element case ->first element
    else if(front==-1){
        front=rear=0;
    }

    //circular nature
    else if(rear==size-1 && front!=0){
      rear=0;
  
    }
    //normal flow
    else{
        rear++;
    }
    arr[rear]=data;
  }

  //PushFront operation
  void pushFront(int data){
           //Queue Full
    if(front==0 && rear==size-1){
        cout<<"Q is full, cannot insert";
        return;
    } 
    //single element case ->first element
    else if(front==-1){
        front=rear=0;
    }

    //circular nature
    else if(front==0 && rear!=size-1){
      front=size-1;
  
    }
    //normal flow
    else{
        front--;
    }
    arr[front]=data;
  }

  //popFront operation
  void popFront(){
       //empty check
    if(front==-1){
      cout<<"Q is empty,cannot pop"<<endl;
      return;
    }

    //single element
    else if(front==rear){
      arr[front]=-1;
      front=-1;
      rear=-1;
    }
    //circular nature
    else if(front==size-1){
      arr[front]=-1;
      front=0;
    }
    //normal flow
    else{
      arr[front]=-1;
      front++;
    }
    
  }

  //PopRear operation
  void popRear(){
    //empty check
    if(front==-1){
      cout<<"Q is empty,cannot pop"<<endl;
      return;
    }

    //single element
    else if(front==rear){
      arr[front]=-1;
      front=-1;
      rear=-1;
    }
    //circular nature
    else if(rear==0){
      arr[rear]=-1;
      rear=size-1;
    }
    //normal flow
    else{
      arr[rear]=-1;
      rear--;
    }
    
  }

  void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
int main(){
    Deque dq(10);

    dq.print();

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.pushRear(40);
    dq.pushRear(50);
    dq.pushRear(60);
    dq.pushRear(70);
    dq.pushRear(80);
    
    dq.print();

    dq.popRear();
    dq.print();

    dq.popFront();
    dq.print();
    return 0;
}
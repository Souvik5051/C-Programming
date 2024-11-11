#include <iostream>
using namespace std;

class cirQueue{
  public:
  int* arr;
  int size;
  int front;
  int rear;

  cirQueue(int size){
    arr=new int[size];
    this->size=size;
    front=-1;
    rear=-1;
  }  

  //Push operation
  void push(int data){
    //Queue Full
    if(front==0 && rear==size-1){
        cout<<"Q is full, cannot insert";
        return;
    } 
    //single element case ->first element
    else if(front==-1){
        front=rear=0;
        arr[rear]=data;
    }

    //circular nature
    else if(rear==size-1 && front!=0){
      rear=0;
      arr[rear]=data;
    }
    //normal flow
    else{
        rear++;
        arr[rear]=data;
    }
  }

  //Pop operation
  void pop(){
    //empty check
    if(front==-1){
      cout<<"Q is empty,cannot pop"<<endl;
    }

    //single element
    else if(front==rear){
      arr[front]=-1;
      front=-1;
      rear=-1;
    }
    //circular nature
    else if(front==size-1){
      front=0;
    }
    //normal flow
    else{
      front++;
    }
  }
};
int main(){
    cirQueue q(10);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    
    return 0;
}
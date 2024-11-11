#include <iostream>
using namespace std;
class Stack{
    //data member
    public:
    int* arr;
    int top;
    int size;
    
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }

    //function

    void push(int data){
        if(size-top>1){
            //space available
            //so insert kar do
            top++;
            arr[top]=data;
        }
        else{
            //space not available means stack is full
            cout<<"Stack Overflow ";
        }
    }

    void pop(){
       if(top==-1){
        //Stack is empty
         cout<<"Stack underflow,cannot delete element";

       }
       else{
        //Stack not empty
        top--;
       }
    }
    
    int getTop(){
        if(top==-1){
            //Stack empty
            cout<<"There is no element in stack ";
        }
        else{
            return arr[top];
        }
    }
    //return number of valid elements present
    int getSize(){
       return top+1;
    }
    bool isEmpty(){
     if(top==-1)
        return true;
     
     else
        return false;
     

    }
};
int main(){
    Stack s(10);
    
    //Insertion operation
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"Size of the stack "<<s.getSize();
    return 0;
}
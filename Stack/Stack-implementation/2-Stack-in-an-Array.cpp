#include <iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    //Function
    
    void push1(int data){
        if(top2-top1==1){
            //Space not available
            cout<<" OVERFLOW in stack1"<<endl;
        }
        else{
            ///Spcae available 
            top1++;
            arr[top1]=data;
        }
    }
    void pop1(){
       if(top1==-1){
        //Stack empty
        cout<<"UNDERFLOW in stack1"<<endl;
       }
       else{
        //stack not empty
        arr[top1]=0;
        top1--;
       }
    }

    void push2(int data){
       if(top2-top1==1){
         //Spcae not available
         cout<<" OVERFLOW in stack2"<<endl;
       }
       else{
        //Space available
        top2--;
        arr[top2]=data;
       }
    }
    void pop2(){
       if(top2==size){
         //Stack is empty
         cout<<"OVERFLOW in stack2";
       }
       else{
         //Stack is not empty
         arr[top2]=0;
         top2++;
       }
    }
    void print(){
        cout<<endl;
        cout<<"top1: "<<top1<<endl;
        cout<<"top2: "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack s(10);
    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

    s.push2(100);
    s.print();
    s.push2(110);
    s.print();
    s.push2(120);
    s.print();
    s.push2(130);
    s.print();
    s.push2(140);
    s.print();
    // s.push2(150);
    // s.print();

    s.pop1();
    s.print();
    return 0;
}
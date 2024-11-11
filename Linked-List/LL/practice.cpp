#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* prev;
   Node* next;

   Node(int d){
     this->data=d;
     this->prev=NULL;
     this->next=NULL;
   }
};

int findLen(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

int main(){
    cout<<"Hello world"<<endl;
    return 0;
}
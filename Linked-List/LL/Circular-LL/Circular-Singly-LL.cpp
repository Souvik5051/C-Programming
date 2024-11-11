#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};

void insertNode(Node* &tail,int element,int data){
    //If node is empty
    if(tail==NULL){
        Node* newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non-empty List
        //Assuming that the element is present in the list
        Node* curr=tail;
        while(curr->data!=element){
           curr=curr->next;
        }
        //Element found->curr representing element wala node 
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;

    }
}

void print(Node* tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
     insertNode(tail,5,7);
    print(tail);
     insertNode(tail,7,9);
    print(tail);
     insertNode(tail,5,6);
    print(tail);
    return 0;
}
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
//I want to insert a node right at head of Linked List
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //Step1:Create a new Node
    Node* newNode=new Node(data);
    //Step2:Connect with head
    newNode->next=head;
    //Step3:Update the head
    head=newNode;
}

//I want to insert a node right at the end of Linked List
void insertAtTail(Node* &head,Node* &tail,int data){
     if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //Step1:Create a new Node
    Node* newNode=new Node(data);
    //Step2:Connect with tail
    tail->next=newNode;
    //Step3: Update tail
    tail=newNode;
}

int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtPosition(int data,int position,Node* &head,Node* &tail){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //Step: Find the position: prev & curr;
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    int len=findLength(head);
    if(position>len){
        insertAtTail(head,tail,data);
        return; 
    }
    int i=1;
    Node* prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    //Step2:Create a new Node
    Node* newNode=new Node(data);
    //Step3:
    newNode->next=curr;
    //Step:
    prev->next=newNode;

}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    // Node* head=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);

    insertAtTail(head,tail,77);
    cout<<"All element of LL ";
    print(head);
    cout<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    
    insertAtPosition(101,3,head,tail);
    cout<<endl;
    print(head);
    cout<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
   
    return 0;
}
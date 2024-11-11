#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        cout<<"Node with value : "<<this->data<<" deleted "<<endl;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

//Insertion in Linked List
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        //LL empty
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
   //LL non-empty
   //Step1:Create a new Node
   Node* newNode=new Node(data);
   
   //Step2:
   newNode->next=head;
   //Step3:
   head->prev=newNode;
   //Step4:
   head=newNode;

}

void insertAtTail(Node* &head,Node* &tail,int data){
    //LL empty;
    if(head==NULL){
        //Create a newNode
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //LL is non-empty
    //Step1: Create a newNode
    Node* newNode=new Node(data);
    
    //Step2: 
    tail->next=newNode;
    //Step3:
     newNode->prev=tail;
    //Step4:
    tail=newNode;

}

void insertAtPosition(Node* &head,Node* &tail,int data,int positiion){
    //LL empty
    if(head==NULL){
        //Create a new node;
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        
    }
   //LL non-empty
   else{
    if(positiion==1){
        insertAtHead(head,tail,data);
        return;
    }
    int len=getLength(head);
    if(positiion>len){
       insertAtTail(head,tail,data);
       return;
    }

    //Insert at middle
    //Step1: find prevNode & currNode
    int i=1;
    Node* prevNode=head;
    while(i<positiion-1){
        prevNode=prevNode->next;
        i++;
    }
    Node* curr=prevNode->next;

    //Step2: create a node
    Node* newNode=new Node(data);
    //Step3:
    prevNode->next=newNode;
    //Step4:
    newNode->prev=prevNode;
    //Step5:
    newNode->next=curr;
    //Step6:
    curr->prev=newNode;


   }
    
}

//Delete any node in LL
void deleteFromPos(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"Linked List is empty ";
        return;
    }
    if(head->next==NULL){
        //Single Node
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    int len=getLength(head);
     if(position>len){
        cout<<"Please enter a valid position ";
        return;
    }
   
    if(position==1){
        //want to delete first node
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    
    if(position==len){
        //Delete last node 
        Node* temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }
    //Delete from middle of Linked List
    //Step1: find left,curr,right;
    int i=1;
    Node* left=head;
    while(i<position-1){
         left=left->next;
         i++;
    }
    Node* curr=left->next;
    Node* right=curr->next;

    //Step2: 
    left->next=right;
    //Step3: 
    right->prev=left;
    //Step4:
    curr->prev=NULL;
    //Step5:
    curr->next=NULL;

    delete curr;
}
int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    
    Node*head=first;
    Node*tail=third;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;
    cout<<"All the collection of Node ";
    print(first);
    cout<<endl;
    cout<<endl;

    cout<<"Insert at head ";
    insertAtHead(head,tail,101);
     
    cout<<endl;


    print(head);
    cout<<endl;
    cout<<endl;
    
    cout<<"Insert at tail";
    insertAtTail(head,tail,501);

    cout<<endl;
    print(head);
    cout<<endl;
    cout<<endl;

    cout<<"Insert at position ";
    insertAtPosition(head,tail,301,3);
    
    cout<<endl;
    print(head);
    cout<<endl;
    cout<<endl;
    
    cout<<"Delete the node ";
    cout<<endl;
    deleteFromPos(head,tail,2);

    cout<<endl;
    print(head);

    return 0;
}
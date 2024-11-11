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
    ~Node(){
        cout<<"Deleted succesfully "<<this->data<<" ";
    }
};


class circularLinkedList{
    public:
    Node* head;
    circularLinkedList(){
        this->head=NULL;
    }

    void display(){
      Node*temp=head;
      do{
         cout<<temp->data<<"->";
         temp=temp->next;
      }while(temp!=head);
      cout<<endl;
    }
    void insertAtStart(int data){
        // If LL is empty
        
        Node* newNode=new Node(data);
        if(head==NULL){
           head=newNode;
           newNode->next=newNode; // Circular Linked List
           return;
        }
        Node* tail=head;
        while(tail->next!=head){
            // cout<<"hello";
            tail=tail->next;
        }
        //Now tail is pointing to last Node
        tail->next=newNode;
        newNode->next=head;
        head=newNode;
    }
    void insertEnd(int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            newNode->next=newNode;
            return;
        }
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=newNode;
        newNode->next=head;

    }

    void deleteAtStart(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        
        }
        head=head->next;
        tail->next=head;
        delete(temp);
    }
    void deleteAtEnd(){
        if(head==NULL){
            return;
        }
        Node* tail=head;
        while(tail->next->next!=head){
            tail=tail->next;
        }
        //here tail is pointing to the second last node
        Node* temp=tail->next; //this node to be deleted

        tail->next=head;
        delete(temp);

    }
    bool checkCircular(){
       if(head==NULL){
        return true;
       }
       Node* temp=head->next;
       while(temp!=NULL && temp!=head){
         temp=temp->next;
       }
     
       if(temp==head){
        return true;
       }
       return false;
    }
};
int main(){
    circularLinkedList cll;
    cll.insertAtStart(1);
    cll.display();
    // cll.insertAtStart(2);
    // cll.display();
    // cll.insertAtStart(3);
    // cll.display();
    // cll.insertEnd(6);
    // cll.display();
    // cll.deleteAtStart();
    // cll.display();
    // cll.deleteAtEnd();
    // cll.display();

    bool ans=cll.checkCircular();
    if(ans){
        cout<<"Given linked list is circular ";
    }
    else{
        cout<<"Given linked list is not circular";
    }
    return 0;
}



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
 void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
}

Node* getMiddle(Node* head){
    if(head==NULL){
        cout<<"LL is empty";
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    //LL have > 1 node
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    return slow;
}
int main(){
    Node* head=new Node(10);
    Node* first=new Node(20);
    Node* second=new Node(30);
    Node* third=new Node(40);
    Node*fourth=new Node(50);

    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    
    print(head);
    
    cout<<"Middle Node " <<getMiddle(head)->data<<endl;
    return 0;
}
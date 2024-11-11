#include <iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    Node* next;
    int data;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

};

void print(Node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<"->";
    print(head->next);
}
Node* deleteFromEnd(Node* head,int k){
    //cout<<"inside";
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    int count=0;
    while(count<k){
        fast=fast->next;
        count++;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    
    return slow;
}
void deleteNode(Node *ele){
    if(ele->next==NULL){
     return;
    }
    else{
        ele->data = ele->next->data;
        ele->next = ele->next->next;
    }
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);

    a->next=b;
    b->prev=a;

    b->next=c;
    c->prev=b;

    c->next=d;
    d->prev=c;

    d->next=e;
    e->prev=d;

    e->next=NULL;
    print(a);
    cout<<endl;
    Node* ele = deleteFromEnd(a,3);
    deleteNode(ele);
    print(a);
    return 0;
}
#include <iostream>
using namespace std;

class Node{
   public:
   Node* next;
   int data;
   Node(int d){
     this->data=d;
     this->next=NULL;
   }
};

bool findloop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        if(slow==fast){
            return true;
        }
    }
    return false;
}

void print(Node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}
int main(){
    // Node* a=new Node(1);
    // Node* b=new Node(2);
    // Node* c=new Node(3);
    // Node* d=new Node(4);
    // Node* e=new Node(5);

    // a->next=b;
    // b->next=c;
    // c->next=d;
    // d->next=e;
    // e->next=b;

    int n;
    cin>>n;
    bool flag=true;
    Node* head=NULL;
    Node* ans=head;
    Node* temp=head;
    int d;
    while(n>0){

       cin>>d;
       if(flag){
         head=new Node(d);
         temp=head;
         flag=false;
       }
       else{
        temp->next=new Node(d);
        head=temp;
       }
       n--;
    }
    print(ans);
    // if(findloop(head)){
    //     cout<<"Loop present ";
    // }
    // else{
    //     cout<<"Loop not present";
    // }

    return 0;
}
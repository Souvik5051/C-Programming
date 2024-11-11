#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};

int findLength(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
       count++;
       temp=temp->next;
    }
    return count;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

bool chechForLoop(Node* &head){
    if(head==NULL){
        cout<<"Linked List is empty ";
    }

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow==fast){
        return 1;
     }

 }
   
    return 0;
}


int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    Node* seventh=new Node(70);
    Node* eighth=new Node(80);
    Node* ninth=new Node(90);
      
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=fifth; //in this line loop is present as ningth pointing to fifth

    // print(first);
    // cout<<endl;
    // first=reverseKthNode(first,2);
    
    // print(first);

    if(chechForLoop(first)){
        cout<<"Loop is present ";
    }
    else{
        cout<<"Loop is not present ";
    }
    return 0;
}
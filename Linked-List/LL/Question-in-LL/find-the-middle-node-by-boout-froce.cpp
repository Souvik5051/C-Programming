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
void findMiddleNode(Node* head){
    int len=findLength(head);
        int i=1;
        while(i<len/2){
          head=head->next;
            i++;
        }
       if(len%2==0)
       cout<<head->data;
       else
       cout<<head->next->data;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    // Node* sixth=new Node(60);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    // sixth->next=NULL;

   
    findMiddleNode(first);
    return 0;
}
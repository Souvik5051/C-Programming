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

Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

bool checkPalindrome(Node* &head){
    if(head==NULL){
        cout<<"Given Linked List is empty ";
        return true;
    }
    //Only for one node
    if(head->next==NULL){
        return true;
    }
    // >1 node
    Node* slow=head;
    Node* fast=head->next;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    // slow is pointing to the middle/slow node

    //Step B: reverse the LL after middle node
    Node* reverseLLKaHead=reverse(slow->next);
    
     
    //Join the reverse LL into the left part
    slow->next=reverseLLKaHead;

    //Step C: Start Comparision
    Node* temp1=head;
    Node* temp2=reverseLLKaHead;
    while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            //Not a palindrome
            return false;
        }
        else{
            // if data is equal,then age baro
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;
}
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(300);
    Node* fourth=new Node(20);
    Node* fifth=new Node(10);
    
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    
    // checkPalindrome(head);
    bool isPalindrome=checkPalindrome(head);
    if(isPalindrome){
        cout<<"Given Linked List is palindrome ";
    }
    else{
        cout<<"Given Linked List is not palindrome ";
    }

    return 0;
}
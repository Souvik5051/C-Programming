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

Node* reverseKthNode(Node* head,int k){
    if(head==NULL){
        cout<<"LL is Empty "<<endl;
        return head;
    }
    int len=findLength(head);
    if(k>len){
        // cout<<"Enter valid value for k ";
        return head;
    }

    //It means no of nodes in LL is >=k

    //Step A:reverse first k nodes of LL
    Node* prev=NULL;
    Node* forward=NULL;
    Node* curr=head;
    int count=0;
    while(count < k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    //Step B: find recursion ka ans
    if(forward!=NULL){
        //we still have left to revrese
        Node* recursionKaAns=reverseKthNode(forward,k);
        

    //Step C: connect with the first reverse k nodes
       head->next=recursionKaAns;

    }
   //Step D: return prev starting node prev

   return prev;
    
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

    print(first);
    cout<<endl;
    first=reverseKthNode(first,3);
    
    print(first);
    return 0;
}
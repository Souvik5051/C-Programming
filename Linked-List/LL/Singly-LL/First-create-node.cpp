#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //Constructer
    Node(){
        this->data=0;
        this->next=NULL;
    }
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
}

//Print all Node List by Using recursion
void printUsingRecursion(Node* head){
   if(head==NULL) return;
   
   cout<<head->data<<" ";

   print(head->next);
}

//Reverse print by using recursion
void printReverse(Node* head){
    //base condition
    if(head==NULL) return;

    //call the function for reverse print
    printReverse(head->next);

    cout<<"Reverse all node is "<<head->data<<" "<<endl;
}

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);

    first->next=second;
    second->next=third;
    third->next=fourth;

    cout<<"The LL list is: ";
    // print(first);
    printUsingRecursion(first);
    cout<<endl;
    printReverse(first);
    return 0;
}
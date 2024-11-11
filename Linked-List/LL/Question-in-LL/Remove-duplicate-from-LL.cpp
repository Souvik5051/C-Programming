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
void removeDuplicate(Node* &head){
    if(head==NULL){
        cout<<"Given LL is empty ";
        return;
    }
    if(head->next==NULL){
        cout<<"Single Node in LL";
        return;
    }
    Node* curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL) && (curr->data==curr->next->data)){

            Node* temp=curr->next;
            curr->next=curr->next->next;
            
            //Delete
            temp->next=NULL;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }

}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(2);
    Node* fourth=new Node(3);
    Node* fifth=new Node(4);
    Node* sixth=new Node(4);

    
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    cout<<"Input is: ";
    print(head);
    removeDuplicate(head);
    cout<<"Output is: ";
    print(head);
    
    return 0;
}
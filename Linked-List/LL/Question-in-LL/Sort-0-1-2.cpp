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

void sortZeroOneTwo(Node* &head){
    int zero=0;
    int one=0;
    int two=0;
    
    Node* temp=head;
    while(temp!=NULL){
        //Step A: find count of zeros,ones,tows
        if(temp->data==0)
            zero++;
        
        if(temp->data==1)
            one++;
        
        if(temp->data==2)
            two++;
        temp=temp->next;
    }
    //Step B:fill 0,1,2s in the original LL
    temp=head;
    while(temp!=NULL){
       //fill zeros
        while (zero--)
        {
            temp->data=0;
            temp=temp->next;
        }
        
        //fill ones
        while(one--){
            temp->data=1;
            temp=temp->next;
        }
        //fill tows
        while(two--){
            temp->data=2;
            temp=temp->next;
        }
    }
    
}

Node* sort2(Node* &head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        //Single node
        return head;

    }
    //Create dummy nodes
    Node* zeroHead=new Node(-1);
    Node *zeroTail=zeroHead;

    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;

    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    //Traverse original LL
    Node* curr=head;
    while(curr!=NULL){

        if(curr->data==0){
           //take out the zero wali node
           Node* temp=curr;
           curr=curr->next;
           temp->next=NULL;

           //append the zero node in zeroHead LL
           zeroTail->next=temp;
           zeroTail=temp;
        }
        else if(curr->data==1){
            //take out the one wali node
           Node* temp=curr;
           curr=curr->next;
           temp->next=NULL;

           //append the zero node in zeroHead LL
           oneTail->next=temp;
           oneTail=temp;
        }
        else if(curr->data==2){
           //take out the two wali node
           Node* temp=curr;
           curr=curr->next;
           temp->next=NULL;

           //append the zero node in zeroHead LL
           twoTail->next=temp;
           twoTail=temp;
        }
    }
    // ab yha pr,zero,one,two tenno LL ready ha


    //Join them
    //Remove dummy nodes

    //modify one wali list
    Node* temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;
    
    //modify two wali list
    temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;
    //Join list
    if(oneHead!=NULL){
        zeroTail->next=oneHead;
        if(twoHead!=NULL){
            oneTail->next=twoHead;
        }
    }
    else{
        //ONE wali list is empty
        if(twoHead!=NULL){
           zeroTail->next=twoHead;
        }
    }
    
    //remove zeroHead dummy node
    temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=NULL;
    delete temp;
    //return head of the modified linked list 
    return zeroHead;
}
int main(){
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(2);
    Node* fourth=new Node(0);
    Node* fifth=new Node(0);
    Node* sixth=new Node(1);

    
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    
    cout<<"Input is : "<<endl;
    print(head);
    // sortZeroOneTwo(head);
    // cout<<"Output is : "<<endl;
    // print(head);

    head=sort2(head);
    cout<<"Output is : "<<endl;
    print(head);
    return 0;
}




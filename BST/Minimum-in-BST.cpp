#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //Constructure
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* root,int data){
    if(root==NULL){
        //this is first Node we have to create
        root=new Node(data);
        return root;
    }
    //not the first Node

    if(root->data >data){
        //insert into left
        root->left=insertIntoBST(root->left,data);
    }
    else{
        //insert into right
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
       root=insertIntoBST(root,data);
       cin>>data;
    }
}

int minValueFind(Node* root){
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

int maxValueFind(Node* root){
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
int main(){
    Node* root=NULL;
    cout<<"Enter the data for Node: "<<endl;
    takeInput(root);
    cout<<"The minimum value : "<<minValueFind(root)<<endl;
    cout<<"The maximum value : "<<maxValueFind(root)<<endl;
    
    return 0;
}
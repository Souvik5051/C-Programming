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

//Assuming there are only unique values in tree
bool findNodeInBST(Node* root,int target){
    //Base case
    if(root==NULL){
        return false;
    }
    if(root->data==target){
        return true;
    }

    if(target > root->data){
        //Right subtree me search karo
        return findNodeInBST(root->right,target);
    }
    else{
        return findNodeInBST(root->left,target);
    }
}
int main(){
    Node* root=NULL;
    cout<<"Enter the data for Node: "<<endl;
    takeInput(root);
    
    bool ans=findNodeInBST(root,155);
    cout<<"present or not "<<ans<<endl;
    return 0;
}
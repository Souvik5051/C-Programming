#include <iostream>
#include<queue>
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
// Find the max value
int maxVal(Node* root){
    // base case
    if(root==NULL){
        return -1;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}


//Deletion in BST
Node* deleteNodeInBST(Node* root,int target){
    //base case
    if(root==NULL){
        return root;
    }
if(root->data==target){
    //isi ko delete karna h 
    if(root->left==NULL && root->right==NULL){
        //Leaf Node
        delete root;
        return NULL;
    }
    else if(root->left==NULL && root->right!=NULL){
        Node* child=root->right;
        delete root;
        return child;
    }
    else if(root->left!=NULL && root->right==NULL){
        Node* child=root->left;
        delete root;
        return child;
    }
    else{
        //Dono child exists karte h
        //inorder predecessor of left subtree ->left subtree me max value
        int inorderPre=maxVal(root->left);
        root->data=inorderPre;
        root->left=deleteNodeInBST(root->left,inorderPre);
        return root;
    }
 }
 else if(target > root->data){
    //right jana chaiye
    root->right= deleteNodeInBST(root->right,target);
 }
 else if(target < root->data){
    //left jana chaiye
    root->left= deleteNodeInBST(root->left,target);
 }
}

void levelOrderTraversalwithPattern(Node* &root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            Node* temp=q.front();
            q.pop();
            if(i==size){
                cout<<temp->data;
            }
            else{
                cout<<temp->data<<" ";
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        cout<<endl;
    }
}

int main(){
    Node* root=NULL;
    cout<<"Enter the data for Node: "<<endl;
    takeInput(root);
    deleteNodeInBST(root,100);
    levelOrderTraversalwithPattern(root);
    
    return 0;
}
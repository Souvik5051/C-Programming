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

Node* bstUsingInorder(int inorder[],int s,int e){
    //base case
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    int element=inorder[mid];
    Node* root=new Node(element);

    root->left=bstUsingInorder(inorder,s,mid-1);
    root->right=bstUsingInorder(inorder,mid+1,e);

    return root;
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

    int inorder[]={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=8;
    Node* root=bstUsingInorder(inorder,s,e);
    levelOrderTraversalwithPattern(root);
    // Node* root=NULL;
    // cout<<"Enter the data for Node: "<<endl;
    // takeInput(root);
    
    return 0;
}




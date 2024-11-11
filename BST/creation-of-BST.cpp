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

//Preorder Traversal
void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
//Postorder Traversal
void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //NLR
   
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
//inorder Traversal
void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //NLR
   
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

void levelOrderTraversalwithPattern(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
            Node* temp=q.front();
            q.pop();
            if(i==s-1){
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
    cout<<"Printing the Tree: "<<endl;
    levelOrderTraversalwithPattern(root);
    cout<<endl;
    cout<<"Inoreder printing: "<<endl;
    inOrderTraversal(root);
    cout<<endl;
    cout<<"preoreder printing: "<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"postoreder printing: "<<endl;
    postOrderTraversal(root);
    cout<<endl;
    return 0;
}
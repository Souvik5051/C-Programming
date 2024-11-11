#include <iostream>
#include<queue>
using namespace std;

class Node{
   public:
   int data;
   Node* left;
   Node* right;
   Node(int d){
     this->data=d;
     this->left=NULL;
     this->right=NULL;
   }
};

int findPosition(int arr[],int n,int element){
  for(int i=0;i<n;i++){
    if(arr[i]==element){
      return i;
    }
  }
  return -1;
}
// Build tree from inorder and preorder traversal
Node* buildTree(int inorder[],int preorder[],int size,int &preIndex,int inorderStart,int inorderEnd){
  // Base case
  if(preIndex>=size || inorderStart>inorderEnd){
    return NULL;
  }
  
  // Step-A
  int element=preorder[preIndex++];
  Node* root=new Node(element);
  int pos=findPosition(inorder,size,element);
  // Step-B root->left solve
  root->left=buildTree(inorder,preorder,size,preIndex,inorderStart,pos-1);
  // Step-B root->right solve
  root->right=buildTree(inorder,preorder,size,preIndex,pos+1,inorderEnd);
  
  return root;
  
}

void level(Node* root){
  if(root==NULL)return;
  queue<Node*>q;
  q.push(root);
  while(!q.empty()){
    int n=q.size();
    for(int i=0;i<n;i++){
      Node* temp=q.front();
      q.pop();
      if(i==n-1)
        cout<<temp->data<<endl;
      else
        cout<<temp->data<<" ";

      if(temp->left!=NULL){
        q.push(temp->left);
      }
      if(temp->right!=NULL){
        q.push(temp->right);
      }
    }
  }
}

int main() 
{
    int inorder[]={40,20,50,10,60,30,70};   
    int preorder[]={10,20,30,40,50,60,70};
    int size=7;
    int preIndex=0;
    int inorderStart=0;
    int inorderEnd=size-1;
    Node* root=NULL;
    root=buildTree(inorder,preorder,size,preIndex,inorderStart,inorderEnd);
    level(root);
    
    return 0;
}
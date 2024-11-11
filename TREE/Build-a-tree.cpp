#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
  int data;
  Node *left;
  Node *right;
  // Constructor
  Node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *buildTree()
{
  int data;
  cout << "Enter the data: " << endl;
  cin >> data;

  if (data == -1)
  {
    return NULL;
  }

  // Step A,B AND C
  // Step A->create the root Node
  Node *root = new Node(data);

  // Step B-> left call
  cout << "Enter the data for left part of " << data << " node " << endl;
  root->left = buildTree();

  // Step C->right call
  cout << "Enter the data for right part of " << data << " node " << endl;
  root->right = buildTree();

  return root;
}

// Traversal on a Tree
// Level Order traversal

void levelOrderTraversal(Node *root)
{
  //  cout<<root->data<<endl;
  queue<Node *> q;

  // Initially
  q.push(root);

  while (!q.empty())
  {
    // Step A
    Node *temp = q.front();

    // Step B
    q.pop();

    // Step C
    cout << temp->data << " ";

    // Step D
    if (temp->left)
    {
      q.push(temp->left);
    }
    if (temp->right)
    {
      q.push(temp->right);
    }
  }
}

// labelOrder Traversal but its output is
//    20
//    40 30
//    30 50 60
//    80

void levelOrderTraversalwithPattern(Node *root)
{
  //  cout<<root->data<<endl;
  queue<Node *> q;

  // Initially
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    // Step A
    Node *temp = q.front();

    // Step B
    q.pop();

    if (temp == NULL)
    {
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      // Step C
      cout << temp->data << " ";

      // Step D
      if (temp->left)
      {
        q.push(temp->left);
      }
      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}



//Inorder Traversal 
void inOrderTraversal(Node* root){
  if(root==NULL){
    return;
  }

  //LNR
  inOrderTraversal(root->left);
  cout<<root->data<<" ";
  inOrderTraversal(root->right);
}



//preorder Traversal 
void preOrderTraversal(Node* root){
  if(root==NULL){
    return;
  }

  //NLR
  cout<<root->data<<" ";
 preOrderTraversal(root->left);
 
  preOrderTraversal(root->right);
}

//postorder Traversal 
void postOrderTraversal(Node* root){
  if(root==NULL){
    return;
  }

  //LRN
 
  postOrderTraversal(root->left);
 
  postOrderTraversal(root->right);

  cout<<root->data<<" ";
}

//Find Height/maxDepth in a TREE
int findHeight(Node* root){
  //Base case
  if(root==NULL){
    return 0;
  }
    
  int leftHeight=findHeight(root->left);
  int rightHeight=findHeight(root->right);

  int ans=max(leftHeight,rightHeight)+1;

  return ans;

}

int main()
{
  Node *root = NULL;
  root = buildTree();
  // cout<<root->data;
  // levelOrderTraversal(root);

  levelOrderTraversalwithPattern(root);
  
  // inOrderTraversal(root);
  
  cout<<"Height is "<<findHeight(root)<<endl;

  return 0;
}




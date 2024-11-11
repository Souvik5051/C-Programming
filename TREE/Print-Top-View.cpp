#include <iostream>
#include<map>
#include<queue>
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

void printTopView(Node* root){
    if(root==NULL){
        return;
    }

    //Create a map for storing HD->topNode->data
    map<int,int>topNode;

    //Level order traversal
    //We will store a pair consisting of a node and horizontal distance
    queue <pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int> temp=q.front();
        q.pop();

        Node* frontNode=temp.first;
        int hd=temp.second;

        //jo bhi horizontal distance ayaa h,check if answer for that hd already exits or not
        if(topNode.find(hd)==topNode.end()){
            //create entry
            topNode[hd]=frontNode->data;
        }

        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    //ab appka ans answer store hua hoga apke map me
    cout<<"Printing the answer: "<<endl;
    for(auto i:topNode){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
}

int main(){
    Node *root = NULL;
    root = buildTree();

    printTopView(root);
    return 0;
}
#include <iostream>
using namespace std;


template<typename T>
class Node{  //template class
    public:
    T data;
    Node* next;

    Node(T val){
        this->data=val;
        this->next=NULL;
    }
};

int main(){
    Node<int>* node1=new Node<int>(2);
    cout<<node1->data<<endl;
    Node<char>* node2=new Node<char>('a');
    cout<<node2->data;
    return 0;
}
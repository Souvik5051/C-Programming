#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
  public:
   unordered_map<int,list<int>>adjList;

   void addEdge(int u,int v,bool direction){
     //direction = 0 ->undirected graph
     //direction = 1 ->directed graph
     //create an edge from u to v
     adjList[u].push_back(v);
     if(direction==0){
        //undirected edge
        //create an edge from v to u
        adjList[v].push_back(u);
     }
   }

   void printAdjacencyList(){
      for(auto node:adjList){
        cout<<node.first<<"-> ";
         for(auto neighbours:node.second){
            cout<<neighbours<<", ";
         }
         cout<<endl;
      }
   }
};
int main(){
    Graph g;
    
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(0,2,0);
    
    g.printAdjacencyList();
    return 0;
}
#include <iostream>
#include<unordered_map>
#include<list>
#include<queue>

using namespace std;
template<typename T>

class Graph{
  public:
   unordered_map<T,list<T>>adjList;

   void addEdge(T u,T v,bool direction){
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

   void BFS(T src, unordered_map<T,bool> &visited){
     queue<T>q;
     q.push(src);
     visited[src]=true;

     while(!q.empty()){
        T frontNode=q.front();
        q.pop();
        cout<<frontNode<<" ";

        //insert neighbours
        for(auto neighbour:adjList[frontNode]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=true;
            }
        }
     }
   }

   void DFS(int src,unordered_map<int,bool>&visited){
      cout<<src<<" ";
      visited[src]=true;

      for(auto neighbour:adjList[src]){
         if(!visited[neighbour]){
            DFS(neighbour,visited);
         }
      }
   }
};
int main(){
    // Graph <int>g;
    // Graph<char>g;


    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(0,2,0);

    // g.addEdge('a','b',0);
    // g.addEdge('b','c',0);
    // g.addEdge('a','c',0);
    
    // g.printAdjacencyList();


    //BFS TRAVERSAL
    Graph<int>g;

    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,5,0);
    g.addEdge(3,7,0);
    g.addEdge(7,6,0);
    g.addEdge(7,4,0);

    g.printAdjacencyList();

    cout<<endl;
   //  g.BFS(0);

    //for disconnected graph you write this login
    //no of node n=8;
    int n=7;
   unordered_map<int,bool>visited1;
   cout<<"Printing BFS Traversal : "<<endl;
   for(int i=0;i<=n;i++){
      if(!visited1[i]){
         g.BFS(i,visited1);
      }
   }
   cout<<endl;
   cout<<"Printing DFS Traversal : "<<endl;
   //DFS traversal
   unordered_map<int,bool>visited2;
   for(int i=0;i<=n;i++){
      if(!visited2[i]){
         g.DFS(i,visited2);
      }
   }
    return 0;
}
#include<iostream>
#include<vector>
#define NODE 5
using namespace std;
int graph[NODE][NODE];


void traverse(int u, bool visited[]) {
   visited[u] = true;     //mark v as visited
   for(int v = 0; v<NODE; v++) {
      if(graph[u][v]) {
         if(!visited[v])
            traverse(v, visited);
      }
   }
}
bool isConnected() {
   bool *vis = new bool[NODE];
   //for all vertex u as start point, check whether all nodes are visible or not
   for(int u; u < NODE; u++) {
      for(int i = 0; i<NODE; i++)
         vis[i] = false;     //initialize as no node is visited
         traverse(u, vis);
      for(int i = 0; i<NODE; i++) {
         if(!vis[i])     //if there is a node, not visited by traversal, graph is not connected
            return false;
      }
   }
   return true;
}
bool isEulerCircuit() {
   if(isConnected() == false) {     //when graph is not connected
      return false;
   }
   vector<int> inward(NODE, 0), outward(NODE, 0);
   for(int i = 0; i<NODE; i++) {
      int sum = 0;
      for(int j = 0; j<NODE; j++) {
         if(graph[i][j]) {
            inward[j]++;     //increase inward edge for destination
            sum++;    //how many outward edge
         }
      }
      outward[i] = sum;
   }
   if(inward == outward)      //when number inward edges and outward edges
         return true;
   return false;
}
int main() {
    int i, j , n;
    int graph[10][10];
    printf("\nEnter the number of nodes:");

	scanf("%d",&n);

	printf("\nEnter the adjacency matrix:\n");

	for(i=1;i<=n;i++)

	for(j=1;j<=n;j++)

	{

		scanf("%d",&graph[i][j]);

		if(graph[i][j]==0)

			graph[i][j]=999;

	}
   if(isEulerCircuit())
      cout << "Euler Circuit Found.";
   else
     cout << "There is no Euler Circuit.";
}

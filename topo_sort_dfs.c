#include<stdio.h>
int i,visit[20],n,adj[20][20],s,topo_order[10];

void dfs(int v)
{
  int w;
  visit[v]=1;
  for(w=1;w<=n;w++)
    if((adj[v][w]==1) && (visit[w]==0))
      dfs(w);
  topo_order[i--]=v;
}

void main()
{
  int v,w;
  printf("Enter the number of vertices:\n");
  scanf("%d",&n);
  printf("Enter the adjacency matrix:\n");
  for(v=1;v<=n;v++)
    for(w=1;w<=n;w++)
      scanf("%d",&adj[v][w]);
  for(v=1;v<=n;v++)
      visit[v]=0;
  i=n;
  for(v=1;v<=n;v++)
  {
   if(visit[v]==0)
      dfs(v);
  }
  printf("\nTopological sorting is:");
  for(v=1;v<=n;v++)
     printf("v%d ",topo_order[v]);
}
  
OUTPUT 1 :

Enter the number of vertices:
5
Enter the adjacency matrix
0 0 1 0 0
0 0 1 0 0
0 0 0 1 1
0 0 0 0 1
0 0 0 0 0
Topological ordering is v1 v2 v3 v4 v5

OUTPUT 2 :
enter the number of vertices:
3
Enter the adjacency matrix
0 1 0
0 0 1
1 0 0

Topological ordering is not possible

#include<stdio.h>

int a,b,u,v,i,j,n,ne=1;
int visited[10],min,mincost,cost[10][10];
void main()
{
    printf("Enter the number of nodes in the graph: ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix: \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;

        }
    }
    visited[1]=1;
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
            for(j=1;j<=n;j++)
            if(cost[i][j]<min)
        if(visited[i]!=0){
            cost[i][j]=min;
             a=u=i;
             b=v=j;
        }
    if(visited[u]==0 || visited[v]==0)
    {
        printf("\n Edge %d :(%d,%d) Cost: %d ",ne++,a,b,min);
        mincost+=min;
        visited[b]=1;
    }
    cost[a][b]=cost[b][a]=999;

}
  printf("Minimum cost = %d",mincost);
}

#include<stdio.h>
int a,b,i,j,n,ne=1,u,v;
int min,mincost=0;
int cost[10][10],parent[10];
int find(int );
int uni(int,int);
void main()
{
    printf("Enter the number of vertices of the graph: ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix of the graph: \n");
    for(i=1;i<=n;i++){
           for(j=1;j<=n;j++)
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;

    }
    while(ne < n)
    {
        for(i=1,min=999;i<=n;i++){
            for(j=1;j<=n;j++){
                if(cost[i][j]<min){
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if (uni(u,v))
        {
            printf("\nEdge %d :(%d,%d) Cost: %d ",ne++,a,b,min);
            mincost+=min;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\n\tMinimum cost: %d",mincost);
}

int find(int i)
{
    while(parent[i])
    i=parent[i];
       return i;
}
int uni(int i, int j)
{
    if(i!=j){
        parent[j]=i;
        return 1;
    }
    return 0;
}

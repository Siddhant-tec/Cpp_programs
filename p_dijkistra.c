#include<stdio.h>
void dijikistra(int G[10][10],int n,int startnode );
void main()
{
    int i,j,n,u;
    int G[10][10];
    printf("Enter the number of nodes of the graph: ");
    scanf("%d",&n);
    printf("Enter adjacency matrix of the graph G: ");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++);
             scanf("%d",&G[i][j]);
             dijikistra(G,n,u);
}
}
void dijikistra(int G[10][10],int n,int startnode)
{
    int i,j,cost[10][10],count,mindistance;
    int visited[10],pred[10],distance[10],nextnode;


    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    if(G[i][j]==0){
        G[i][j]=999;}
        else{
            G[i][j]=cost[i][j];
        }

for(i=1;i<=n;i++)
{
    distance[i]=cost[startnode][i];
    visited[i]=startnode;
    pred[i]=startnode;
}
visited[startnode]=1;
distance[startnode]=0;
count=1;
while( count < n-1 )
{
    mindistance=999;
    for(i=1;i<=n;i++)
        if(distance[i]<mindistance&&visited[i]){
            distance[i]=mindistance;
            nextnode=i;
        }
        visited[nextnode]=i;
    for(i=1;i<=n;i++)
    if(cost[nextnode][i]+mindistance<distance[i]){
        distance[i]=cost[nextnode][i]+mindistance;
        pred[i]=nextnode;
    }
    count++;
}
for(i=1;i<=n;i++)
    if(i!=startnode)
        printf("\nDistance of %d: %d ",i,distance[i]);
        printf("\nPath: ",i);
        j=i;
        do{
            j=pred[j];
            printf("<- %d",j);
        }
        while(j!=startnode);
}



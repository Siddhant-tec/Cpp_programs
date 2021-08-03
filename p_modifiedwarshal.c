#include<stdio.h>
void display(int p[10][10] , int n );
int main()
{
    int adj[10][10],i,j,n,q[i][j],k;
    printf("Enter the number of nodes in the graph: ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix: \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
    scanf("%d",&adj[i][j]);
        }
    }
        printf("The adjacent matrix is as follows: \n");
        display(adj,n);

   for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(adj[i][j]==0)
            q[i][j]=999;
        else
            adj[i][j]=q[i][j];
   }
}
for(k=1;k<=n;k++)
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(q[i][j]<=q[i][k]+q[k][j])
               q[i][j]=q[i][j];
            else
                q[i][j]=q[i][k]+q[k][j];
        }
    }
    printf("\n\n");
    display(q,n);
}return 0;
}
void display(int p[10][10],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%d\t",p[i][j]);

    }
}


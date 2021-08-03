#include<stdio.h>
#include<math.h>
int max(int,int);
void warshall(int p[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
          for(j=1;j<=n;j++)
            p[i][j]=max(p[i][j],p[i][k]&&p[k][j]);
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
void main()
{
    int p[10][10]={0},n,i,j,e,u,v;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d",&n);
    printf("\nEnter the number of edges in the graph: ");
    scanf("%d",&e);
    for(i=1;i<=n;i++){
        printf("\nEnter the end vertices of %d edge: \n",i);
        scanf("%d%d",&u,&v);
        p[u][v]=1;
        printf("The %d vertex is: ",i);
        printf("{%d",u);
        printf(",%d}\n",v);
    }
    printf("\n Matrix of input data: \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
         printf("%d\t",p[i][j]);
         printf("\n");

    }
    warshall(p,n);
    printf("The transitive closure of the following matrix is : \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        printf("%d\t",p[i][j]);

    printf("\n");
    }
}



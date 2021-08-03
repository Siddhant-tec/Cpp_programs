#include<stdio.h>
#include<malloc.h>
struct node
{

int data;
struct node *left;
struct node *right;

};
struct node *tree;
void create_tree(struct node *);
struct node* insertElement(struct node *,int);
void inorderTraversal(struct node *);
void preorderTraversal(struct node *);
void postorderTraversal(struct node *);

void main()
{
    int val,choice;
    create_tree(tree);

   do
   {
       printf("\n ******MAIN MENU******* \n");

printf("\n 1. Insert Element");

printf("\n 2. Preorder Traversal");

printf("\n 3. Inorder Traversal");

printf("\n 4. Postorder Traversal");
printf("%d",choice);
{
    scanf("%d",&choice);
}

switch(choice)
{
    case 1 : {printf("Enter the value of new node to be inserted: ");
              scanf("%d",&val);
              tree=insertElement(tree,val);
              break;
    }
    case 2 : {printf("\n the elements of the tree are :\n ");
              preorderTraversal(tree);
              break;
    }
    case 3 : {printf("\nthe elements of the tree are  :\n ");
              inorderTraversal(tree);
              break;
    }
    case 4 : {printf("\nThe elements of the tree are : \n");
              postorderTraversal(tree);
              break;
    }
}
}
while (choice!=4);
   }

void create_tree(struct node *tree )
{
    tree=NULL;
}

struct node* insertElement(struct node *tree , int val)
{
    struct node *ptr, *nodeptr, *parentptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;

  if(tree=NULL)
  {
      tree=ptr;
      tree->left=NULL;
      tree->right=NULL;
  }
  else{
    parentptr=NULL;
    nodeptr=tree;

    while(nodeptr!=NULL){
        nodeptr=parentptr;
    if(val<nodeptr->data)
        nodeptr=nodeptr->left;
        else
            nodeptr=nodeptr->right;

  }
  if(val<parentptr->data)

      parentptr->left=ptr;
  else
      parentptr->right=ptr;

  }
  return tree;

}
void preorderTraversal(struct node *tree)
{
    if(tree!=NULL)
    {
    printf("\n\t%d",tree->data);
    inorderTraversal(tree->left);
    inorderTraversal(tree->right);
    }
}
void inorderTraversal(struct node *tree)
{
    if(tree!=NULL)
    {
    inorderTraversal(tree->left);
    printf("\n\td",tree->data);
    inorderTraversal(tree->right);
    }
}
void postorderTraversal(struct node *tree)
{
    if(tree!=NULL){
postorderTraversal(tree->left);
postorderTraversal(tree->right);
printf("\n\t%d",tree->data);
    }
}

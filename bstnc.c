#include<stdio.h>
#include<malloc.h>


struct BSTnode
{
  int data;
  struct BSTnode *left,*right;
}*root,*new1,*temp;

struct BSTnode *stk[100];
int top=-1;

void create()
{
	new1=(struct BSTnode*)malloc(sizeof(struct BSTnode));
	printf("Enter Data");
	scanf("%d",&new1->data);
	new1->left=NULL;
	new1->right=NULL;
	if(root==NULL)
	{
		root=new1;
	}
	else
	{
		temp=root;
		while(temp!=NULL)
		{
			if(temp->data<new1->data)
			{
				if(temp->right==NULL)
				{
					temp->right=new1;
					break;
				}
				else
				{
					temp=temp->right;
				}
			}
			if(temp->data>new1->data)
			{
				if(temp->left==NULL)
				{
					temp->left=new1;
					break;
				}
				else
				{
					temp=temp->left;
				}
			}
		}
	}
}

void preorder_non_recur()
{
	struct BSTnode*stk[20];
	int top=-1;
	temp=root;
	stk[++top]=temp;
	while(top!=-1)
	{
		struct BSTnode*curr=stk[top--];
		printf("%d",curr->data);
		if(curr->right!=NULL)
		{
			stk[++top]=curr->right;
		}
		if(curr->left!=NULL)
		{
			stk[++top]=curr->left;
		}
	}
}

void inorder_non_recur()
{
	struct BSTnode*stk[20];
	temp=root;
	stk[++top]=temp;
	while(top!=-1)
	{
		while(temp->left!=NULL)
		{
			stk[++top]=temp->left;
			temp=temp->left;
		}
		temp=stk[top--];
		printf("%d",temp->data);
		if(temp->right!=NULL)
		{
			stk[++top]=temp->right;
			temp=temp->right;
		}
	}
}

void postorder_non_recur()
{
	struct BSTnode*stk[20],*curr;
	curr=root;
	do{
		while(curr!=NULL)
		{
			if(curr->right!=NULL)
			{
				stk[++top]=curr->right;
			}
			stk[++top]=curr;
			curr=curr->left;
		}
		curr=stk[top--];
		if(curr->right!=NULL  && stk[top]==curr->right)
		{
			temp=stk[top--];
			stk[++top]=curr;
			curr=temp;
		}
		else
		{
			printf("%d",curr->data);
			curr=NULL;
		}
	}while(top!=-1);
}
void postIteration_twostack()
{
	struct BSTnode*stk1[20];
	struct BSTnode*stk2[20];
	int top1=-1,top2=-1;
	struct BSTnode*curr=root;
	stk1[++top1]=curr;
	while(top1!=-1)
	{
		stk2[++top2]=stk1[top1--];
		if(curr->left!=NULL)
		{
			stk1[++top1]=curr->left;
		}
		if(curr->right!=NULL)
		{
			stk1[++top1]=curr->right;
		}
		curr=stk1[top1];
	}
	while(top2!=-1)
	{
		printf("%d",stk2[top2--]->data);
	}
}

int main()
{
	int n;
	root=NULL;
	new1=NULL;
	temp=NULL;
	printf("Enter the number of element ");
	scanf("%d",&n);
	while(n--)
	{
		create();
	}
	printf("\nPreorder: ");
	preorder_non_recur();
	printf("\nInorder: ");
	inorder_non_recur();
	printf("\nPostorder: ");
	postorder_non_recur();
	printf("\nPostorder using 2 stack: ");
	postIteration_twostack();
	return 0;
}

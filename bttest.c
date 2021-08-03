#include<stdio.h>
//#include<stdlib.h>1
#include<malloc.h>

struct BSTnode
{
    int data,val;
    struct BSTnode *lc,*rc;

}*root=NULL,*temp,*new1,*curr;

struct BSTnode* stk[20];
int top=-1;

void create(int val)
{
    new1=(struct BSTnode *)malloc(sizeof(struct BSTnode));
    printf("Enter data: ");
    scanf("%d",&val);
    new1->lc=NULL;
    new1->rc=NULL;
    if(root=NULL)
    {
        root=new1;
    }
    else
    {
        temp=root;
        while(0!=1)
        {
            if(temp->data<new1->data)
            {
                if(temp->rc==NULL)
                {
                    temp->rc=new1;
                    break;
                }
                else
                    temp=temp->rc;
            }
            if(temp->data>new1->data)
            {
                if(temp->lc==NULL)
                {
                    temp->lc=new1;
                    break;
                }
                else
                    temp=temp->lc;
            }
        }
    }
}
void pre_nonrecur()
{
    temp=root;
    stk[++top]=temp;
    while(top!=-1)
    {
        printf("%d\t",stk[top]->data);
        temp=stk[top];
        top--;
        if(temp->rc!=NULL)
        {
            stk[++top]=temp->rc;
        }
        if(temp->lc!=NULL)
        {
            stk[++top]=temp->lc;
        }
    }
}
void in_nonrecur()
{
    temp=root;
    top++;
    stk[top]=temp;
    temp=temp->lc;
    while(top!=-1)
    {
        while(temp!=NULL)
        {
            top++;
            stk[top]=temp;
            temp=temp->lc;
        }
        temp=stk[top];
        printf("%d\t",temp->data);
        top--;
        temp=temp->rc;
        if(temp!=NULL)
        {
            stk[++top]=temp;
            temp=temp->lc;
        }
    }
}
void post_nonrecur()
{

    curr=root;
    do
    {
        while(curr!=NULL)
        {
            if(curr->rc!=NULL)
            {
                stk[++top]=curr->rc;
            }
            stk[++top]=curr;
            curr=curr->lc;
        }

    curr=stk[top];
    top--;

    if(curr->rc!=NULL && curr->rc==stk[top])
    {
        temp=stk[top];
        top--;
        stk[++top]=curr;
        curr=temp;
    }
    else
    {
        printf("%d\t",curr->data);
        curr=NULL;
    }
  }while(top!=-1);
}

void main(int val)
{
    int ch;
    printf("Please Enter data to create binary tree\n");
    scanf("%d",&val);
    create(val);
    printf(" \n\t2.PreOrder \n\t3.InOrder \n\t4.PostOrder \n\t5.Exit\n");
do{
   printf("\n Enter the your desired choice: ");
   scanf("%d",&ch);
   switch(ch)
   {

   case 1:{
           pre_nonrecur();
        break;
   }
   case 2:{
           in_nonrecur();
       break;
   }
   case 3:{
           post_nonrecur();
       break;
   }
   case 4:{
           printf("\n\tExiting program.......\n");
       break;

   }
   default:
    {
        printf("\n\tEnter a valid choice");

    }
   }
}
while(ch!=4);


}


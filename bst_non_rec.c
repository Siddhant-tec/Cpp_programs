#incldue<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct TreeNode
{
    int data;
    struct TreeNode *Lchild,*Rchild;
};
void Insert(int Key)
{
TreeNode *Tmp, NewNode;
NewNode = new BSTNode;
NewNode->Data = Key;
NewNode->Lchild = NewNode->Rchild = Null:
if(Root == Null)
{
Root = NewNode;
return;
}
Tmp = Root;
while(Tmp != Null)
{
if(Tmp->Data < Key)
{
if(Tmp->Lchild == Null)
{
Tmp->Lchild = NewNode;
return;
}
Tmp = Tmp->Lchild;
else if(Tmp->Rchild == Null)
{
Tmp->Rchild = NewNode;
return;
}
}
}
Tmp = Tmp->Rchild;
}


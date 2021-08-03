#include<stdio.h>
#include<stdlib.h>

int queue[20],rear,front,max,i,choice,val;
void enqueue(void);
void dequeue(void);
void display(void);
int main()
{
    front=-1;
    rear=-1;
printf("\nOPERATIONS on QUEUE");
printf("\n--------------------");
printf("\n\tThe following operations are supported");
printf("\n\t1.INSERT \n\t2.DELETE \n\t3.DISPLAY \n\t4.EXIT");
printf("\nEnter the size of the queue");
scanf("%d",&max);
do{
printf("\nEnter your desired choice: ");
scanf("%d",&choice);
switch(choice){

   case 1: {
           enqueue();
           break;
   }
   case 2: {
            dequeue();
              break;
            }
   case 3:
       {
            display();
            break;
   }
   case 4:
       {
           printf("Exiting program..................");
           break;
   }
default:
       {

    printf("please enter a valid choice");
}
}
}
while(choice!=0);
    return 0;
}

void enqueue()
{
     if(rear>=max-1)
          printf("OVERFLOW condition");
          else if(front==-1 ){
            front=0;
          }
     else{
          printf("Enter the value to be inserted in the queue");
          scanf("%d",&val);
          queue[rear]=val;
          rear++;
}
}
void dequeue()
{   int num;
    if(front==-1 && rear==-1)
    {
        printf("queue is UNDERFLOW");
    }
    else if(front>rear){
        front=-1;rear=-1;
    }

    else{
        printf("the deleted value is ",queue[front]);
        front++;


}
}

void display()
{
    if(front==-1||front>rear){
        printf("Queue is Empty");
    }
    else{
        printf("The elements in the queue are:", queue[i]);
        for(i=front;i<=rear;i++)
        {
        printf("%d",queue[i]);
        }
    }


}


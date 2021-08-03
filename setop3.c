printf("\n Enter the size of the Stack: ");
scanf("%d",&n);
printf("\n\tStack operation using array");
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
do{
   printf("\n Enter the your desired choice: ");
   scanf("%d",&choice);
   switch(choice){
   case 1:{
           push();
           break;
   }
   case 2:{
        pop();
        break;
   }
   case 3:{
       display();
       break;
   }
   case 4:{
       printf("\n\tExit Point");
       break;
   }
   default:
    {
        printf("\n\tEnter a valid choice");

    }
   }
}
while(choice!=4);
    return 0;
}

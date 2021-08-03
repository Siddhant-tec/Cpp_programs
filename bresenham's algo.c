#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
 float x,y,x1,y1,x2,y2,dx,dy,e;
 int i,gd,gm;
 clrscr();

 printf("Enter the value of x1 :\t");
 scanf("%f",&x1);
 printf("Enter the value of y1 :\t");
 scanf("%f",&y1);
 printf("Enter the value of x2 :\t");
 scanf("%f",&x2);
 printf("Enter the value of y2 :\t");
 scanf("%f",&y2);


 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"");

 dx=abs(x2-x1);
 dy=abs(y2-y1);

 x=x1;
 y=y1;

 e=2*dy-dx;

 i=1;
 do
 {
     putpixel(x,y,15);
     while(e>=0)
     {
         y=y+1;
         e=e-2*dx;

     }
     x=x+1;
     e=e+2*dx;
     i=i+1;
 }
 while(i<=dx);
 getch();
 closegraph();
 return 0;
 }

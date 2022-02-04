#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int queue[max],front=-1,rear=-1;
void qinsert()
{
int info;
if(rear<max)
 {
 printf("Enter the element to insert:");
 scanf("%d",&info);
 if(front==-1)
  {
  front=0;
  rear=0;
  }
 else
   rear=rear+1;
  queue[rear]=info;

 }
 else

 printf("*******queue is full*********");
 getch();


}
 void qdelete()
 {
 int info;
 if(front!=-1)
 {
  info=queue[front];
  if(front==rear)
  {
  front=-1;
  rear=-1;
  }
  else
  {
  return(queue[front++]);
  }
 }
  else
  {
   printf("**************queue is empty****************");
  getch();
  }
 }

void qdisplay()
{
int i=front;
while(i<=rear)
{
 printf("%3d",queue[i]);
 i++;
}
 }
int main()
{
int ch,n;
printf("Maximum size of queue is 5");
while(1)
{
printf("\n 1.INSERT \n 2.DELETE \n 3.DISPLAY\n 4.EXIT");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
  qinsert();
  break;
case 2:
  qdelete();
  break;
case 3:
  qdisplay();
  getch();
  break;
case 4:
  exit(0);

}
}
}


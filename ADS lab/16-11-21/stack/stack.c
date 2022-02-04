#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int stack[max],top=-1;
int push(int n)
{
if(top==max-1)
 {
 printf("\n stack is full");
 exit(0);
 }
else
 {
 printf(" \n Enter the element to be inserted:");
 scanf("%d",&n);
 stack[++top]=n;
 }
}
int pop()
{
int n;
if(top==-1)
 {
 printf("\n*********** stack is empty***********");
 exit(0);
 }
 else
 {
 return(stack[top--]);
 }
}
void display()
{
int p=top;
if(p==-1)
 {
 printf("\n ***********stack is empty************");
 }
else
 {
 printf("\n The elements are:");
 while(p>=0)
  {
  printf("%3d",stack[p]);
  p--;
  }
 }
}
int main()
{
int ch,n;
printf("Maximum size of stack is 5");
while(1)
{
printf("\n 1.PUSH \n 2.POP \n 3.DISPLAY\n 4.EXIT");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
  push(n);
  break;
case 2:
  pop(n);
  break;
case 3:
  display();
  break;
case 4:
  exit(0);
  getch();
}
}
}

#include<stdio.h>
struct node
{
int data;
struct node*next;
};
struct node*head;
void main()
{
int ch;
while(ch!=0)
{
printf("Stack Operations are_____________");
printf("\n1.Push");
printf("\n2.Pop");
printf("\n3.Display");
printf("\n4.Exit");
printf("\nenter the choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1:
 {
 push();
 break;
 }
 case 2:
 {
 pop();
 break;
 }
 case 3:
 {
 display();
 break;
 }
 case 4:
 {
 exit(0);
 break;
 }
 default:
 printf("invalid choice");
 }
 };
 }
 void push()
 {
 int data;
 struct node*ptr=(struct node*)malloc(sizeof(struct node));
 if(ptr==NULL)
 {
 printf("can't push");
 }
 else
 {
 printf("\nenter the value:\n");
 scanf("%d",&data);
 if(head==NULL)
 {
 ptr->data=data;
 ptr->next=NULL;
 head=ptr;
 }
 else
 {
 ptr->data=data;
 ptr->next=head;
 head=ptr;
 }
 }
 }
 void pop()
 {
 int item;
 struct node*ptr;
 if(head==NULL)
 {
 printf("underflow");
 }
 else
 {
 item=head->data;
 ptr=head;
 head=head->next;
 free(ptr);
 }
 }
 void display()
{
    int i;
    struct node *ptr;
    ptr=head;
    if(ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("\nPrinting Stack elements \n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr = ptr->next;
        }
    }
    }

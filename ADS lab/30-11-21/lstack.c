#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void search();
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
printf("\n4.Search");
printf("\n5.Exit");
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
 search();
 break;
 }
 case 5:
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
    void search()
{
    struct node *ptr;
    int item,i=0,flag;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        while (ptr!=NULL)
        {
            if(ptr->data == item)
            {
                printf("item found at location %d \n",i+1);
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            i++;
            ptr = ptr -> next;
        }
}

        if(flag==1)
        {
            printf("Item not found\n");
        }
}


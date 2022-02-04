#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[50],ch,n;
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
printf("1.Insertion \n");
printf("2.Deletion \n");
printf("3.Traversal \n");
printf("4.Searching \n");
scanf("%d",&ch);
switch(ch)
{
 case 1:
 {
  int pos,k;
  printf("enter the position want to insert the element:");
  scanf("%d",&pos);
  printf("enter the element want to insert:");
  scanf("%d",&k);
   for(i=n-1;i>=pos-1;i--)
    {
     a[i+1]=a[i];
    }
  a[pos-1]=k;
  printf("After insertion the array is:");
   for(i=0;i<=n;i++)
    {
     printf("%d",a[i]);
    }
 break;
 }
 case 2:
 {
  int pos;
  printf("enter the position of element want to delete:");
  scanf("%d",&pos);
  for(i=pos-1;i<=n-1;i++)
   {
     a[i]=a[i+1];
   }
   printf("After deletion the array is:");
  for(i=0;i<=n-2;i++)
    {
     printf("%d",a[i]);
    }
  break;
    }
 case 3:
    {
    printf("Array after traversal:");
    for(i=0;i<n;i++)
     {
      printf("%d",a[i]);
     }
     break;
    }
 case 4:
  {
    int k;
    printf("enter the key value to search:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
     if(a[i]==k)
     {
      printf("item is found");
      return 0;
     }
    }
     {
      printf("item is not found");

    }
 break;
    }
 default:
    printf(".....invalid choice.....");
}
getch();
}

#include<stdio.h>
void main()
{
int arr[10],ar[10],n,j,i,m,p,q,a,b,k,merge[20];
printf("enter the size of the array:\n");
scanf("%d",&n);
printf("enter the elements of the array 1:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
    for (i = 0; i < n; ++i)
     {
     for (j = i + 1; j < n; ++j)
      {
      if (arr[i] > arr[j])
       {
       a =  arr[i];
       arr[i] = arr[j];
       arr[j] = a;
       }
      }
     }
printf("enter the size of second array:\n");
scanf("%d",&m);
printf("enter the elements of the array 2:\n");
for(p=0;p<m;p++)
 {
  scanf("%d",&ar[p]);
 }
for (p = 0; p < m; p++)
     {
     for (q= p + 1; q < m; q++)
      {
      if (ar[p] > ar[q])
       {
       b =  ar[p];
       ar[p] = ar[q];
       ar[q] = b;
       }
      }
     }
printf("The sorted array1 is:\n");
for(i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
  merge[i]=arr[i];
 }
 k=i;
printf("\n The sorted array2 is:\n");
for(p=0;p<m;p++)
 {
  printf("%d \t",ar[p]);
  merge[k]=ar[p];
  k++;
 }
 printf("\nThe new array after merging is:\n");
 for (i = 0; i < k; ++i)
     {
     for (j = i + 1; j < k; ++j)
      {
      if (merge[i] > merge[j])
       {
       a =  merge[i];
       merge[i] = merge[j];
       merge[j] = a;
       }
      }
     }
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
 }

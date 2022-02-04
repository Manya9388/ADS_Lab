 #include<stdio.h>
 #include<stdlib.h>
 void main()
 {
  int si[10],sj[10],s[10],i,j,k=0,n1,n2;
  printf("enter the size of first array:");
  scanf("%d",&n1);
  printf("enter the elements(Binary Values):");
   for(i=0;i<n1;i++)
   {
       scanf("%d",&si[i]);
   }
  printf("enter the size of second array:");
  scanf("%d",&n2);
  printf("enter the elements(Binary Values):");
   for(i=0;i<n2;i++)
    {
        scanf("%d",&sj[i]);
    }
    if(n1==n2)
    {
        printf("After Union operation:");
        for(i=0;i<n1;i++)
        {
            s[i]=si[i]|sj[i];
            printf("%d",s[i]);
        }
        printf("\nAfter Intersection operation:");
        for(i=0;i<n1;i++)
        {
            s[i]=si[i]&sj[i];
            printf("%d",s[i]);
        }
        printf("\n After Difference operation:");
        for(i=0;i<n1;i++)
        {
            sj[i]=~sj[i];
        }
        for(i=0;i<n1;i++)
        {
            s[i]=si[i]&sj[i];
            printf("%d",s[i]);
        }
    }
    else

        printf("Not compactable....");


   }

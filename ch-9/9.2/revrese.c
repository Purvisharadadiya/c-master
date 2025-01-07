#include<stdio.h>
main()
{
     char size;
     printf("Enter of the array size :");
     scanf("%d",&size);
     int a[size];

     for(int i=0;i<size;i++)
     {
        printf("Enter element:");
        scanf("%d",&a[i]);
     }
     for(int i=0;i<size;i++)
     {
        printf("%d",a[i]);
     }

     int n=size-1;

     for(int i=0; i<size /2; i++)
      {
        int  c = a[i];
        a[i] =a[n--];
        a[n] =c;
      }
    printf("%d",n);
}
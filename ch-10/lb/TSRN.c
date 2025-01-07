#include<stdio.h>


void sum(int a,int b);


void main()
{      
        int a,b;
        printf("Entr any number a&b: ");
        scanf("%d %d",&a ,&b);

       sum(a,b);
}

   void sum(a,b)
   {

    printf("%d+%d=%d",a,b,a+b);
   }



#include<stdio.h>
#include<conio.h>
main()
{
   int g,n,c;
   int sum=0;
   clrscr();
   printf("anter any number:");
   scanf("%d",&n);
   c=n;
   while(n!=0)
   {
     g=n%10;
     sum=sum*10+g;
     n/=10;
   }
     if(c==sum)
     {
	 printf("pelindor number:\n");
     }
     else
     {
	printf("not a pelindor number:\n");
     }
     getch();


}

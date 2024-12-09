#include<stdio.h>
#include<conio.h>
main()
{
       int n;
       clrscr();
       printf("enter a numbers:");
       scanf("%d",n);
       while(n>=1)
       {
	 if(n%2==0)
	 printf("%d\t",n);
	 n--;

       }
       getch();
}
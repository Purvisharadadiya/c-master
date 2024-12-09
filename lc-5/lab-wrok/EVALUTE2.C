#include<stdio.h>
#include<conio.h>
main()
{
   float x,y, result;
   clrscr();
   printf("enter the  value of:x");
   scanf("%f",&x);
   printf("enter the  value of:y");
   scanf("%f",&y);
   result=(x-y)*(x-y);
   printf("the result of(x-y)^2 is :%.2lf\n",result);
   getch();
}
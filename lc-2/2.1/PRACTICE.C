#include<stdio.h>
#include<conio.h>
main()
{
   int a=10;
   clrscr();
   printf("%d %d %d %d",a++,a--,a++,--a);

   printf("\n %d",a++);
   printf("\n %d",a--);
   printf("\n %d",--a);
   printf("\n %d",a--);
   getch();
}

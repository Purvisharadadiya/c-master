#include<stdio.h>
#include<conio.h>
#define p printf
#define ch clrscr
#define ge getch
main()
{
   int l, b,h,area;
   p(" enter number");
   scanf("%d%d%d",&l,&b,&h);
   area=l*b*h;
   ch();
   p("%d",area);
   ge();
}

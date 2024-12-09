#include<stdio.h>
#include<conio.h>
#define p printf
#define ch clrscr
#define ge getch
main()
{
      int l,b,area;
      p("\n enter the leangth:");
      scanf("%d",&l);
      p("\n rnter the breadth:");
      scanf("%d",&b);
      area=l*b;
      printf("\n area of ractangle:%d",area);
      ge();
}



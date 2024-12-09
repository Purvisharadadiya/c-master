#include<stdio.h>
#include<conio.h>
main()
{
     int bs,hra,da,ta,ans;
     clrscr();
     printf("Enter gross salary");
     scanf("%d",&bs);
     hra=(bs*10)/100;
     da=(bs*5)/100;
     ta =(bs*8)/100;
     ans=bs+hra+da+ta;
     printf("gross salary %d",ans);
     getch();

}

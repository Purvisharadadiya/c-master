#include<stdio.h>
#include<conio.h>
#define ch clrscr
main()
{
      int a=10;
      ch();
      printf("%d\n",++a);//11  //pre unary
      printf("%d\n",a);  //11


      printf("%d\n",a++);//11 //post
      printf("%d\n",a);//12

      printf("%d\n",--a);// 13  //pre unary
      printf("%d\n",a);//13

      printf("%d\n",a--);//13 //post
      printf("%d\n",a);//12
}
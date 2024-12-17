#include<stdio.h>
#include<conio.h>
main()
{
       int i, j;
       clrscr();
       for(i=65; i<=69; i++)
       {
	 for(j=i;j<=69; j++)
	 {
	  if(j%2==0)
	  {
	   printf("%c",j+32);
	  }
	  else
	  {
	   printf("%c",j);
	  }

	 }
	 printf("\n");
       }
       getch();
}
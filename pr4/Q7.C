#include<stdio.h>
#include<conio.h>
main()
{
       int i,s,j;
       clrscr();
	 for(i=1; i<=6; i++)
	 {
	      for(j=1;j<=6;j++)
	      {
		if(j==1||i==1||i==3||(i==2&&j==6))
		{
		   printf("*");
		}
		else
		{
		  printf(" ");
		}

	      }
	      printf("\n");
	   }
	   getch();
}
#include<stdio.h>
#include<conio.h>
main()
{
       long int n,count=0,i;
       clrscr();

       printf("Enter any number:");
       scanf("%ld",&n);

	  for(i=1;n!=0;i++)
	  {
	    n=n/10;
	    count++;
	  }
	  printf("\n %ld",count);
	  getch();

}
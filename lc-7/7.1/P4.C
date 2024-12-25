#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrcsr();
	for(i=1;i<=5;i++)
	{
	      for(j=1;j<=1;j++)
	      {
	      if(i%2)
	      {
	       printf("1");
	      }
	      else
	      {
		printf("2");
	      }
		printf("%d",i);
	      }
	      printf("\n");
	}
	getch();

}
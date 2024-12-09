#include<stdio.h>
#include<conio.h>

main()
{
      int score;
      char ch;
      clrscr();
      printf("anter numer ");
      scanf("%d",&score);
      (score>=90&& score<=100)     ? ch='A'
	 :(score>80&& score<=90)   ? ch='B'
	 :(score>70&& score<=80)   ? ch='C'
	 :(score>60&& score<=70)   ? ch='D'
	 :(score>50&& score<=60)   ? ch='E'
	 :(score>30&&score<=40)    ? ch='F'
	 :printf("please enter valid choice");



	    printf("%c",ch);
	    switch(ch)
	 {
	    case 'A':
	    case 'a':
		  printf("excellent wrok!");
		  break;
	    case 'B':
	    case 'b':
		  printf("well done");
		  break;
	    case 'C':
	    case 'c':
		  printf("good job");
		  break;
	    case 'D':
	    case 'd':
		  printf("You passed, but you could do brtter ");
		  break;
	    case 'E':
	    case 'e':
		  printf("you passed");
		  break;
	    case 'F':
	    case 'f':
		  printf("sorry you failed");
		  break;

	 }

		if(ch>='A'&&ch<='E')
		{
		printf("congrtulations!You are eligible for the next level\n ");
		}
	       else
		{
		   printf("plsase try again netxt time");
		}
        getch();
		
}

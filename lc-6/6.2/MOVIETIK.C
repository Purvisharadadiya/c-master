#include<stdio.h>
#include<conio.h>
main()
{
	  int cinematype, movie,time, total,p;
	  char uname[55];
	  int number[10];
	 // char movie [10];
	  clrscr();

	  printf("Enter any name:");
	  scanf("%s",&uname);
	  printf("Enter phone number:");
	  scanf("%d",&number);
	 // printf("Enter movie name\n:");
	 // scanf("%s",&movie);

       //  cinema:
	   printf("\t\t************ WELCOME TO MOVIE BOOKING SYSTEM************\n");
	   printf("\t\tSelect movie type:\n");
	   printf("\t\t1. Bollywood\n");
	   printf("\t\t2. Hollywood\n");
	   printf("\t\t3. dhollywood\n");
	   printf("\t\tPlease select movie type(1-3):");
	   scanf("\t\t%d",&cinematype);

       //movie:
       switch(cinematype)
       {
       case 1:
	printf("\t\t\n Bollywood movies:\n");
	printf("\t\t1.Pushpa2:the the Rule\n");
	printf("\t\t2.Singham agein\n");
	printf("\t\t3. the Sabarmati report\n");
	printf("\t\tPlease select a movie(1-3):");
	scanf("\t\t%d",&movie);
       }
       switch(movie)
       {
       case 1:
       printf("\t\t\n Available show times for pushap 2:the Rule:\n");
       printf("\t\t1.10:30 AM\n");
       printf("\t\t2.2:30PM\n");
       printf("\t\t3.8:00PM\n");
       printf("\t\t4.11:30Pm\n");
       printf("Plsase select a time slot(1-4):");
       scanf("%d",&time);
       }


       switch(time)
       {
       pushpatimeslot:
       case 1: case 2:case 3: case 4:
       printf("|************** ticket***************\n||");
       printf("|\t Movie name  :  Pushpa 2: the Rule\n ||");
       printf("|\t\t Show time    :   %s\n||",
	      time==1 ? "10:30AM":
	      time==2 ?"2:30 PM ":
	      time==3 ?"8:00 PM " :"11:30 PM||");
       printf("|\t price:           300PM\n||");
       printf("|\t GST (18%%):      54\n||");
       printf("|\t TOTAL Amunt:     354\n||");
       printf("|************************************************||");
       break;
     default:
     printf("Invalid time slot .plase try again .\n");
     goto pushpatimeslot;
      }




	  getch();
}
#include<stdio.h>
#include<conio.h>
main()
{
    int n,r,temp;
    int sum=0;
    clrscr();
    printf("enter any number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
       a=n%10;
       sum=sum+(r*r*r);
       n=n/10;
    }
    if(temp==sum)
    {
       printf("armstring number");

    }
    else
    {
       printf(" not armstring nomber ");

    }
    getch();
}
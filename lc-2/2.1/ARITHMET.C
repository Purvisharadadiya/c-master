#include<stdio.h>

main()
{
     int a,b, sum, sub,mul,div ,mod;
     
     printf("anter value of a and b");
     scanf("%d %d",&a,&b);
     sum= a+b;
     sub= a-b;
     mul=a*b;
     div=a/b;
     mod=a%b;
     printf("sum is:%d",sum);
     printf("sub is:%d",sub);
     printf("mul is:%d",mul);
     printf("div is:%d",div);
     printf("mod is:%d",mod);

}
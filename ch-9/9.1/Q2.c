#include<stdio.h>
main()
{
    char str[10];

    printf("Enter your name:");
    scanf("%[^\n]",&str);



    printf("\n\n");


  for(int i=0;str[i]!='\0';i++)
     {
        if(str[i]>='A'&& str[i]<'Z')
        {
            str[i]+=32;
        }

     }
      printf("lover case:%s",str);

}
#include<stdio.h>
main()
{
    char name[20];

    printf("Enter your name:");
    scanf("%[^\n]",&name);
    

      printf("\n\n");
      printf("%s",name);


     for(int i=0;name[i]!='\0';i++)
     {
        if(name[i]>='a'&& name[i]<'z')
        {
            name[i]-=32;
        }

     }
      printf("upparecase:%s",name);


}












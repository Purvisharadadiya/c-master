#include <stdio.h>

int cub();

int main()
{
    int n;

    printf("Enter any number");
    scanf("%d", &n);
    return n * n * n;
    
    
}

int cub()
{
      int reult=cub();
      printf("%d ",reult);
}

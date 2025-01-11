#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};

    int *ptr;
    int **ptr2;
    

    ptr=&a;
    ptr2= &ptr;


    printf("%d",**(ptr2));
    printf("%d",ptr2);
}
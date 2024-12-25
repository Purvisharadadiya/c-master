#include <stdio.h>
main()
{

    int size;
    printf("enter size   array size :");
    scanf("%d", &size);

    int a[size];

    printf("Enter the elements of the array:\n");
    for ( int i = 0; i < size; i++)

    {
        printf("Element [%d]: ", i);
        scanf("%d", &a[i]);
    }
    for ( int i = 0; i < size; i++)

    {
        if(a[i]<0)
        {
          printf("%d" ,a[i]);
        }
       else
       {
          printf("not a negitiv number:"); 
       } 
    }   
        
}
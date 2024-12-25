//Question 1 ://

#include <stdio.h>
int main() 
{
    int n, target, i, j, found = 0;

    
    printf("Enter the number of elements you want to fill in the array: ");
    scanf("%d", &n);

   
    if (n <= 0)
   {
        printf("Invalid array size.\n");
        

        
    }

    int arry[n];

    for (i = 0; i < n; i++) 
    {
        printf("Enter element [%d]: ", i);
        scanf("%d", &arry[i]);
    }

    
    printf("Enter the number to find two values in the array whose sum equals this number: ");
    scanf("%d", &target);

    
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++)
         {
            if (arry[i] + arry[j] == target)
             {
                printf("Found: (%d,%d)\n", arry[i], arry[j]);
                found = 1;
            }
        }
    }

    if (!found) 
    {
        printf("No two values in the array sum up to %d.\n", target);
    }    
}
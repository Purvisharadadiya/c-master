// Question 2 ://

#include <stdio.h>
int main()
{
    int n, i, j, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size.\n");
        
    }

    int arry[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)

    {
        printf("Element [%d]: ", i);
        scanf("%d", &arry[i]);
    }

    // Remove duplicates
    for (i = 1; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arry[i] == arry[j])
            {

                arry[j] = '\0';
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++)
    {

        if (arry[i] != 0)
        {
            printf("%d", arry[i]);
        }
    }

   
}
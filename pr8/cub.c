
#include <stdio.h>

int cube(int *ptr)
{
    return (*ptr) * (*ptr) * (*ptr);
}

void main()
{
    int count;

    printf("Enter the size of array :-\n\n");
    scanf("%d", &count);

    int array[count][count];

    printf("Enter array :-- \n");

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("Element[%d][%d] :- ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThe cube of the array is :--\n\n");

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("%d\t", cube(&array[i][j]));
        }
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int rows, cols;

    // Input the size of the arrays
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    // Declare the 2D arrays
    int a[rows][cols], b[rows][cols],  sum [rows][cols];

    // Input elements for array A
    printf("Enter array A's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements for array B
    printf("Enter array B's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Adding arrays A and B, storing the result in array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
             sum [i][j]= a[i][j] + b[i][j];
        }
    }

    // Output the result array 
    printf("Array C is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ",  sum [i][j]);
        }
        printf("\n");
    }
}

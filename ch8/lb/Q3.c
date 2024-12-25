#include <stdio.h>
main()
{

    int rows, cols;
    int sum = 0;

    
    printf("Enter the array's rows  size: ");
    scanf("%d", &rows);
    printf("Enter the array's cols size: ");
    scanf("%d", &cols);

    // Declare the 2D array
    int a[rows][cols];

    // Input elements of the array
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of diagonal elements
    for (int i = 0; i < rows; i++)
    {
        sum += a[i][i]; // Sum for the main diagonal
    }

    // Output the sum of diagonal elements
    printf("The sum of diagonal elements of an Array: %d\n", sum);
}

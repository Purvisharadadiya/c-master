#include <stdio.h>
main()
{

    int rows, cols;

    // Get array rows and columns from the user
    printf("Enter array rows: ");
    scanf("%d", &rows);

    printf("Enter array cols: ");
    scanf("%d", &cols);

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    // Initialize sum array to 0 (optional, but good practice)
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = 0; // Initialize sum to 0
        }
    }

    // Input elements for array 'a'
    printf("Enter elements of array 'a':\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements for array 'b'
    printf("Enter elements of array 'b':\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Add corresponding elements of 'a' and 'b' and store them in 'sum'
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the sum array
    printf("Sum of arrays 'a' and 'b':\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", sum[i][j]);
        }
    }
}

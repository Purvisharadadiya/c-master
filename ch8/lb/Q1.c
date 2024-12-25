#include <stdio.h>
main()
{

    int rows, cols;
    float sum = 0, average;

    // Input the size of the array
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
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
            sum += a[i][j]; // Add each element to the sum
        }
    }

    
       // Calculate the average
       average = sum / (rows * cols);

    // Output the result
    printf("Average of the Array: %.2f\n", average);

   
}

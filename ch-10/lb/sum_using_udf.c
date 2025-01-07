#include <stdio.h>
#include  "function.c"

// User-defined function to calculate the sum of array elements

int main()
{
    int size;
    printf("You entered size: %d\n", size);
    size = getArraySize();

    int arr[size];
    // array element input
    inputArray(arr, size);

    /// Calculate the sum 
    int sum = calculateSum(arr, size);

    // Output the result

    printf("The sum of the array: %d\n", sum);
    // avg find
    avg(sum, size);

    return 0;
}

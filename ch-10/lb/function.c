 int getArraySize()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    return size;
}
// TSRN
void inputArray(int arr[], int size)
{
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
//TSRS
int calculateSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
 //TSRN
 
int avg(int sum, int size)
{
    printf("Array average: %.2f\n", (float)sum / size);
}

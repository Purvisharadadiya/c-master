#include <stdio.h>
main()
{

    int size;

    printf("Enter any string:");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter elemrnt a[%d]", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    int index;
    int n;
    
    printf("Enter any index");
    scanf("%d", &index);

    for (int i = 0; i < index; i++)
    {
        int n = a[0];

        for (int j = 0; j < size; j++)
        {
            a[j] = a[j + 1];
        }

        a[size - 1] = n;
    }
    printf("\n\n");

    for (int i = 0; i < size; i++)

        printf("%d ", a[i]);
}

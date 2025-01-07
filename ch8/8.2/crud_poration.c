#include <stdio.h>

main()
{
    int arr[5];
    int n;
    int choice, value, pos;

    printf("Enter array size:");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)

    {
        printf("Enter [%d]", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)

    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Fetch\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

         int size;
        case 1:
            printf("Enter value index :");
            scanf("%d", &value);
            printf("Enter value pos :");
            scanf("%d", &pos);

            for (int i = pos; i < size;)
            {
                  arr[i + 1] = arr[i];
            }
            size++;
               
              arr[pos] = value;

            break;
        case 2:
            printf("\total no of data=%d", size);
            break;

         int pos;
        case 3:

            printf("enter position to search:");
            scanf("%d", &pos);
            if (pos > n)
            {
                printf("position must be less then or aqual %d", n);
            }
            else
            {
                printf("Element at %d position=%d", pos, arr[pos - 1]);
            }
            break;

        
        }
    }
}   
        
    
    


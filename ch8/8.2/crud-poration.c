#include <stdio.h>

main()
{
    int arr[5];
    int n;
    int choice, value, position;

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

            int m;
        case 1:
            printf("Enter value how many mor dadte");
            scanf("%d", &m);

            for (int i = n; i < n + m; i++)
            {

                printf("enter no:");
                scanf("%d", &arr[i]);
            }
            n = n + m;
            break;
        case 2:
            printf("\total no of data=%d", n);
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

        case 4:

        for(i=pos-1)
        {
            
        }

        case 5:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}

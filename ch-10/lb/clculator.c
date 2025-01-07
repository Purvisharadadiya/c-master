#include <stdio.h>
#include"cls_function.c"


void main()
{
    while (1)
    {
        printf("\n\nPress 1 for (+) ");
        printf("\nPress 2 for (-) ");
        printf("\nPress 3 for (*) ");
        printf("\nPress 4 for (/) ");
        printf("\nPress 5 for (%%)");
        printf("\nPress 0 for exit.");

        int choice;

        printf("\n\nEnter your choice :- ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        int first, second;
        switch (choice)
        {
        case 1:
            printf("\n\nEnter first number :- ");
            scanf("%d", &first);

            printf("Enter second number :- ");
            scanf("%d", &second);

            sum(first, second);
            break;
        case 2:
            printf("\n\nEnter first number :- ");
            scanf("%d", &first);

            printf("Enter second number :- ");
            scanf("%d", &second);
            sub(first, second);
            break;
        case 3:
            printf("\n\nEnter first number :- ");
            scanf("%d", &first);

            printf("Enter second number :- ");
            scanf("%d", &second);
            mul(first, second);
            break;
        case 4:
            printf("\n\nEnter first number :- ");
            scanf("%d", &first);

            printf("Enter second number :- ");
            scanf("%d", &second);
            div(first, second);
            break;
        case 5:
            printf("\n\nEnter first number :- ");
            scanf("%d", &first);

            printf("Enter second number :- ");
            scanf("%d", &second);
            mod(first, second);
            break;
        default:
            printf("Undefined value...!");
            break;
        }
    }
}
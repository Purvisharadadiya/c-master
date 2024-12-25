#include <stdio.h>
main()
{

    int row, col;

    printf("enter row:");
    scanf("%d", &row);
    printf("enter col:");
    scanf("%d", &col);

    int a[row][col];

    printf("\n\n array input:\n\n");

    printf("Enter array's elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // array output:

    printf("array ouptput:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)

        {
            printf("%d", a[j][i]);
        }

        printf("\n");
    }

    // row array sum:

    
    int r;
    int sum = 0;
    printf("\n\nenter row\n\n");
    scanf("%d", &r);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (r == i)
            {
                printf(" \n element of  row %d", a[i][j]);
                sum += a[i][j];
            }
        }
    }

    printf("\n row sum :%d\n\n", sum);

    // column array sum :

    printf("output of array column sum :");

    int c, csum = 0;
    printf("Enter column of:");
    scanf("%d", &csum);
    for (int i = 0; i < row; i++)
    {
        printf("%d\t", a[i][c]);
        csum += a[i][c];
    }

    printf("\n column sum :%d \n", csum);
}

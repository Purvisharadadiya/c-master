#include<stdio.h>
main()
{
      int row, col;

    printf("enter row:");
    scanf("%d", &row);
    printf("enter col:");
    scanf("%d", &col);

    int a[row][col];

    printf("\n\narray input:\n\n");

    printf("Enter array's elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int max=a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(a[i][j]>max)
            {
               max=a[i][j]; 
            }
        }

       
    }

    printf("%d",max);

}

      




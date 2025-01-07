
#include <stdio.h>
#define SIZE 3

main()
{
    char board[SIZE][SIZE] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int choice, row, col, turn = 0;
    
    char mark;

   while (1)
    {
        
       printf("\n");
        for (int i = 0; i < SIZE; i++)
        {
           for (int j = 0; j < SIZE; j++)
           {
               printf(" %c ", board[i][j]);
               if (j < SIZE - 1)
                   printf("|");
           }
           printf("\n");
            if (i < SIZE - 1)
               printf("---|---|---\n");
        }
        printf("\n");

        mark = (turn % 2 == 0) ? 'X' : 'O';
        printf("Player %d (%c), enter your choice: ", (turn % 2) + 1, mark);
        scanf("%d", &choice);

       
        switch (choice)
        {
        case 1:
            row = 0;
            col = 0;
            break;

        case 2:
            row = 0;
            col = 1;
            break;

        case 3:
            row = 0;
            col = 2;
            break;

        case 4:
            row = 1;
            col = 0;
            break;

        case 5:
            row = 1;
            col = 1;
            break;

        case 6:
            row = 1;
            col = 2;
            break;

        case 7:
            row = 2;
            col = 0;
            break;

        case 8:
            row = 2;
            col = 1;
            break;

        case 9:
            row = 2;
            col = 2;
            break;

        default:
            printf("Invalid choice. Try again.\n");
            continue;
        }

        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            printf(" Try again.\n");
            continue;
        }

        board[row][col] = mark;
        turn++;

        for (int i = 0; i < SIZE; i++)
        {
            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
                (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
            {
                printf("\nPlayer %d (%c) wins!\n", (turn - 1) % 2 + 1, mark);
            }
        }
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
            (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        {
            printf("\nPlayer %d (%c) wins!\n", (turn - 1) % 2 + 1, mark);
        }

        if (turn == 9)
        {
            printf("\nIt's a draw!\n");
        }
    }
}

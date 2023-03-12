#include "main.h"
#include <stdio.h>

int main(void)
{
    char board[] = {48, 49, 50, 51, 52, 53, 54, 55, 56};
    int square,result1 = 8, result2 = 8;

    print_board(board);

    while (result1 != 99)
    {
        do
        {
            printf("Player 1 make a move ::- ");
            scanf("%d", &square);
        } while (board[square] == 88 || board[square] == 79 || square > 8 || square < 0);

        board[square] = 88;
        print_board(board);
        result1 = checker(board, 88);
        if (result1 == -1 || result1 == 0)
            break;

        do
        {
            printf("Player 2 make a move ::- ");
            scanf("%d", &square);
        } while (board[square] == 88 || board[square] == 79 || square > 8 || board[square] < 0);

        board[square] = 79;
        print_board(board);
        result2 = checker(board, 79);
        if (result2 == 1 || result2 == 0)
            break;
    }

    if (result1 == -1)
        printf("********HURRAY PLAYER 1 (X) WINS!!!!!********\n");
    else if (result2 == 1)
        printf("********HURRAY PLAYER 2 (O) WINS!!!!!********\n");
    else
        printf("********IT ENDED IN A TIE********\n");
    return (0);
}


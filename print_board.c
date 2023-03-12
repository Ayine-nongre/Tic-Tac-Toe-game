#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_board(char *s)
{
    system("clear");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", s[0], s[1], s[2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", s[3], s[4], s[5]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", s[6], s[7], s[8]);

    printf("     |     |     \n\n");
}
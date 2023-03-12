# Tic-Tac-Toe game documentation

This is a simple implementation of the Tic-Tac-Toe game in C. The game allows two players to take turns marking the spaces on a 3x3 game board with their symbol (either "X" or "O"). The first player to get three of their symbols in a row (horizontally, vertically, or diagonally) wins the game. If all spaces on the board are filled and no player has won, the game is a draw

## How to compile and start

Use command  ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 print_board.c check_win.c main.c -o game``` to create the executable file and ```./game``` to start the game

## Code structure
The code is organized into several functions:

`print_board()`

This function takes the game board as an argument and prints it to the screen. It is used to display the game board to the players before and after each turn it is found in the print_board.c file.

`checker()` 

This function checks whether the game is over (i.e., whether a player has won or whether the game is a draw). It takes the game board and the current player's symbol as arguments, and returns an integer value indicating whether the game is over and who has won (if anyone) it is found in the check_win.c file.

`main()` 

This is the main function of the program. It sets up the game board, displays the initial state of the board, and then starts the game loop. The game loop repeats the following steps until the game is over:

    Gets input from the current player.
    Marks the selected space with the current player's symbol.
    Displays the new state of the game board.
    Checks whether the game is over.

If the game is over, the function prints a message indicating the outcome of the game (i.e., which player won or whether the game was a draw), and then exits.

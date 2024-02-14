#include "game.h"

//Player moving:
void PlayerMove(char board[][COLS], int rows, int cols) {
	int x = 0;
	int y = 0;
	puts("Player move please.");
	scanf("%d%d", &x, &y);
	while (1)
	{
		if (x > 0 && x < rows + 1 && y > 0 && y < cols + 1)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				puts("This place is occupied! Re-enter please.");
				break;
			}
		}
		else
		{
			puts("Illegality, re-enter!");
			break;
		}
	}
}


void ComputerMove(char board[][COLS], int rows, int cols) {
	puts("Computer moving:");
	while (1)
	{
		int x = rand() % rows;
		int y = rand() % cols;
		
		if (x > 0 && y > 0 && x < rows && y < cols)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		}
	}
}
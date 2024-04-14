#include "game.h"

char IsWin(char board[][COLS], int rows, int cols) {
	//Judge rows:
	for (int i = 0; i < rows; i++)
	{
		if (board[i][0] == '*' && board[i][1] == '*' && board[i][2] == '*')
			return board[i][0];
	}
	//Judge cols:
	for (int j = 0; j < cols; j++)
	{
		if (board[0][j] == '*' && board[1][j] == '*' && board[2][j] == '*')
			return board[0][j];
	}

	//others:
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board [1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (IsFull(board, rows, cols) == 1)
		return 'q';
	return 'c';
}


int IsFull(char board[][COLS], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
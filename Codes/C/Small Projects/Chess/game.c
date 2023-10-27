#include "game.h"

char ret = 0;
void game(void) {
	char board[ROWS][COLS] = { 0 };
	InitBoard(board, ROWS, COLS);
	DisplayBoard(board, ROWS, COLS);
	while (1)
	{
		PlayerMove(board, ROWS, COLS);
		DisplayBoard(board, ROWS, COLS);
		if ((ret = IsWin(board, ROWS, COLS)) != 'c')
			break;
		ComputerMove(board, ROWS, COLS);
		if ((ret = IsWin(board, ROWS, COLS)) != 'c')
			break;
		DisplayBoard(board, ROWS, COLS);
	}
	if (ret == 'q')
		puts("平局");
	if (ret == '#')
		puts("电脑胜利");
	if (ret == '*')
		puts("玩家胜利");
}

void menu(void) {
	puts("********************");
	puts("********************");
	puts("****  1.Player  ****");
	puts("****  0.Exit    ****");
	puts("********************");
	puts("********************");
	puts("Please enter 1 or 0:");
}

void InitBoard(char board[][COLS], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[][COLS], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < cols - 1)
			{
				printf("|");
			}
		}
		putchar('\n');
		for (int j = 0; j < cols; j++)
		{
			if (i < rows - 1)
			{
				printf("---");
				if (j < cols - 1)
				{
					printf("|");
				}
			}
		}
		putchar('\n');
	}
}
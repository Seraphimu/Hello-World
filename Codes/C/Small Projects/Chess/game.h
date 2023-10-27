//Head files and Define:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

//Functions for the game:
void menu(void);
void game(void);
void InitBoard(char board[][COLS], int rows, int cols);
void DisplayBoard(char board[][COLS], int rows, int cols);
void PlayerMove(char board[][COLS], int rows, int cols);
void ComputerMove(char board[][COLS], int rows, int cols);
char IsWin(char board[][COLS], int rows, int cols);
int IsFull(char board[][COLS], int rows, int cols);
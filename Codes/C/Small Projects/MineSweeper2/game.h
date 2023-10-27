#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//定义ROW 和 ROWS可以只动ROW，ROWS随着ROW的变化而变化：
#define ROW 9
#define COL 9
//多出来的两行两列是为了排查时防止数组月界：
#define ROWS ROW + 2
#define COLS ROW + 2
#define EASY_COUNT 10


//初始化棋盘：
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘：
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//埋雷：
void SetMine(char mine[ROWS][COLS], int row, int col, int a, int b);

//判断排查的位置周围有几个雷：
int GetMine(char mine[ROWS][COLS], int x, int y);

//排雷：
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
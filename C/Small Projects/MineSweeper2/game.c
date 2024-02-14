//游戏功能的实现：
//首先需要初始化两个棋盘：

#include "game.h"
//初始化棋盘：
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	//初始化行：
	for (int i = 0; i < rows; i++)
	{
		//初始化列：
		for (int j = 0; j < cols; j++)
		{
			//将需要初始化成的值赋给棋盘：
			board[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	puts("-----进入游戏-----");
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		putchar('\n');
	}
	puts("-----进入游戏-----");
	putchar('\n');
}


//埋雷：
void SetMine(char mine[ROWS][COLS], int row, int col, int a, int b)
{
	//用for循环控制埋雷的个数：
	int count = EASY_COUNT;
	while (count)
	{
		//rand()函数的结果是一个随机值，但是与9取余后x和y的范围是[0, 8]，加上1之后x和y的范围就是[1,9]：
		 int x = rand() % row + 1;
		 int y = rand() % col + 1;
		if (mine[x][y] == '0' && mine[a][b] == mine[x][y])
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//判断排查的位置周围有几个雷：
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}


//排雷：输入坐标，然后判断坐标是否为雷：
//若坐标越界，则重新输入；
//若结果是雷，游戏结束；
//若结果不是雷，游戏继续；
//直到把雷排完，游戏结束；
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//定义坐标和胜利条件：
	int x = 0;
	int y = 0;
	int win = 0;

	//验证第一次输入的合法性：
	while (1)
	{
		//第一次输入坐标：
		printf("请输入你要排查的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			break;
		}
		else
		{
			printf("坐标越界，请重新输入：\n");
		}
		//排雷：
	}
	//为了第一次不被炸死，把埋雷函数放在第一次输入后：
	SetMine(mine, ROW, COL, x, y);
	DisplayBoard(mine, ROW, COL);   //测试
	//循环控制排雷：
	while (win < row * col - EASY_COUNT)
	{
		//输入验证：
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('1' == mine[x][y])
			{
				printf("触雷，游戏结束：\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMine(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标越界，请重新输入：\n");
		}

		//第n次输入（n > 1）
		printf("请输入你要排查的坐标：");
		scanf("%d%d", &x, &y);
		DisplayBoard(mine, ROW, COL);   //测试
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("排雷成功：\n");
		DisplayBoard(mine, row, col);
	}
}


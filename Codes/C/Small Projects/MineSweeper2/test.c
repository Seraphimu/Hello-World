#include "game.h"
#include "game.c"
//打印游戏菜单：
void menu(void)
{
    puts("********************");
    puts("********************");
    puts("******1. play ******");
    puts("******0. exit ******");
    puts("********************");
    puts("********************");
}
//游戏函数实现；
void game(void)
{
    //定义两个棋盘：
    char mine[ROWS][COLS] = { 0 };
    char show[ROWS][COLS] = { 0 };
    //初始化棋盘：
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    //打印棋盘：
    //DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);
    //排雷：
    FindMine(mine, show, ROW, COL);
}

int main(void)
{
    //取随机值：
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        //调用游戏菜单函数：
        menu();
        //选择是否进入游戏：
        printf("请选择：\n");
        scanf("%d", &input);
        //输入验证：若是输入1则进入游戏，0则退出游戏。非此二值则报错重选：
        if (1 == input)
        {
            game();
        }
        else if (0 == input)
        {
            break;
        }
        else
        {
            puts("输入错误，请重新输入：");
        }
    } while (input);
        return 0;
}
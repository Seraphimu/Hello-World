//輸入6~10上午好，輸入11~13中午好，14~18下午好，其他時間輸出休息時間
// //方法1：if
// #include <stdio.h>
// int main(void)
// {
//     int time;
//     scanf("%d", &time);
//     if (time > 23 || time < 0)
//         puts("輸入錯誤");
//     else if (6 <= time && time <= 10)
//         puts("上午好");
//     else if (11 <= time && time <= 13)
//         puts("中午好");
//     if (14 <= time && time <= 18)
//         puts("下午好");
//     else
//         puts("休息時間");
//     return 0;
// }
// //方法2：switch
// #include <stdio.h>
// int main(void)
// {
//     int time;
//     scanf("%d", &time);
//     switch (time)
//     {
//         default:
//             puts("休息時間");
//             break;
//         case 6: case 7: case 8: case 9: case 10: 
//             puts("上午好");
//             break;
//         case 11: case 12: case 13:
//             puts("中午好");
//             break;
//         case 14: case 15: case 16: case 17: case 18:
//             puts("下午好");
//             break; 
//     }
//     return 0;
// }

//輸入成績，輸入一次提醒一次這是第幾個學生，輸入負數結束，並輸出平均值
#include <stdio.h>
int main(void)
{
    double score, ave;
    double sum = 0;
    int i = 1;
    while ((scanf("%lf", &score)) == 1)
    {
        //輸入負數時退出循環
        if (score < 0)
            break;
        else
        {
            printf("第%d位同學的成績輸入完成\n", i);
            sum += score;
            i++;
        }
    }
    ave = sum / i;
    printf("平均值為%.2lf", ave);
    return 0;
}
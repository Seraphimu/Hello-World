// #include <stdio.h>
// #define N 3
// #define M 3
// typedef struct Stu {
//     char id[20];
//     double s[N];
// }stu;
// void max(stu * a, int len)
// {
//     int i, j;
//     int max = 0;
//     int num = 0;
//     for (i = 0; i < len; i++)
//     {
//         num = 0;
//         max = 0;
//         for (j = 0; j < N; j++)
//         {
//             // printf("%s: %lf\n", a[i].id, a[i].s[j]);
//             // if (a[i].s[max] <=  a[i].s[j])
//             // {
//             //     // printf("%s: %lf\n", a[i].id, a[i].s[j]);
//             //     max = j;
//             //     num = i;
//             // }
//             if (a[i].s[j] <= a[i].s[max])
//             {
//                 max = j;
//                 num = i;
//             }
//         }
//     }
//     printf("最高分同學的學號是%s, 成績是%.2lf", a[num].id, a[num].s[max]);
// }
// int main(void)
// {
//     stu a[N];
//     int i, j;
//     for (i = 0; i < N; i++)
//     {
//         printf("請輸入學號\n");
//         scanf("%s", a[i].id);
//         for (j = 0; j < M; j++)
//         {
//             printf("請輸入第%d個學生的第%d門成績", i + 1, j + 1);
//             scanf("%lf", &a[i].s[j]);
//         }
//     }
//     max(a, N);
    
//     return 0;
// }


// #include <stdio.h>
// int f(int i, int j)
// {
// 	if (j == i || j == 0)
// 		return 1;
// 	else
// 		return f(i - 2, j - 1) + f(i - 1, j - 1);
// }
// int main(void)
// {
// 	int i, j;
// 	for (i = 0; i < 10; i++)
// 	{
// 		for (j = 0; j <= i; j++)
//         {
// 			printf("%3d", f(i, j));
//         }
// 		putchar('\n');
// 	}
		
// 	return 0;
// }







// #include <stdio.h>

// int main(void)
// {
// 	int a;
// 	a = 24, 114514;

// 	printf("%d\n", a);
// 	printf("%d\n", a = 1919810);
// 	printf("%d\n", a);

// 	return 0;
// }










// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
// 	char ch;

// 	while ((ch = getchar()) != '\n')
// 	{
// 		if (isalpha(ch))
// 			putchar(ch + 1);
// 		else
// 			putchar(ch);
// 	}
// 	putchar(ch);			//At last, the value of ch is '\n'

// 	return 0;
// }


#include <stdio.h>

int main(void)
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch == '\n')
			continue;
	}
	putchar(ch);

	return 0;
}
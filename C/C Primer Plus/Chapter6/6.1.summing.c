#include <stdio.h>

//int main(void)
//{
//    long num = 0;
//    long sum = 0L;
//    int status;
//
//    printf("Please enter an integer to be summed ");
//    printf("(q to quit): ");
//    status = scanf("%ld", &num);
//    while (1 == status)
//    {
//        sum += num;
//        printf("Please enter next integer (q to quit): ");
//        status = scanf("%ld", &num);
//    }
//    printf("Those integers sum to %ld.\n", sum);
//
//    return 0;
//}


//基於上面程序做出修改
int main(void)
{
    long num = 0;
    long sum = 0L;

    printf("Please enter an integer to be summed (q to quit): ");

    //利用scanf()函數的返回值來判斷循環是否繼續
    while (1 == scanf("%ld", &num))
    {
        //將所有num累加到sum上
        sum += num;
        printf("Please enter next integer (q to quit): ");
    }
    
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}

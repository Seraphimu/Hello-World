#include <stdio.h>
#include <math.h>
//
//int main(void)
//{
//    const double ANSWER = 3.14159;
//    double response;
//
//    printf("What is the value of pi?\n");
//    scanf("%lf", &response);
//
//    //fabs()函數原型：
//    //double fabs (double x);
//    //返回x的絕對值
//    //利用response - ANSWER的絕對值是否大於0.0001判斷輸入結果是否正確
//    while (fabs(response - ANSWER) > 0.0001)
//    {
//        printf("Try again!\n");
//        scanf("%lf", &response);
//    }
//
//    printf("Close enough!\n");
//
//    return 0;
//}


//基於上面的代碼修改
int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of the pi?\n");

    //利用逗號表達式來簡化代碼
    while (scanf("%lf", &response), fabs(response - ANSWER) > 0.0001)
        printf("Try again!\n");
    
    printf("Close enough!\n");

    return 0;
}

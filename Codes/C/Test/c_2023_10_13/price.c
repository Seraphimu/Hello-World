#include <stdio.h>
#define DISCOUNT 0.7        //折扣

int main(void)
{
    double original_price;
    double current_price;

    //原价
    printf("请输入价格：\n");
    scanf("%lf", &original_price);
   
    //现价
    current_price = original_price * DISCOUNT;
    printf("现价：%.2lf\n", current_price);

    return 0;
}

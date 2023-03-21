#include <stdio.h>

//int main(void)
//{
//    int n = 0;
//
//    while (n < 3)
//        printf("n is %d\n", n);
//        n++;
//    printf("That is all this program does\n");
//
//    return 0;
//}


//在上面的代碼基礎上修改
int main(void)
{
    int n = 0;
   
    //利用逗號表達式簡化代碼
    while (printf("n is %d\n", n++), n < 3)
        ;
    printf("That's all this program does.\n");

    return 0;
}

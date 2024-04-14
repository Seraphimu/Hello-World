////第一个C语言程序（入门）
//#include <stdio.h>
//
//int main(void)
//{
//	printf("Hello, World!\n");
//
//	return 0;
//}
//
////练习1-1：在自己的系统中运行“hello world”程序，有意去年程序中的部分内容，看看会有什么出错信息。
//
////去掉#include <stdio.h>
////报错
////因为printf()函数的原型在stdio.h文件中
//int main(void)
//{
//	printf("Hello, World!\n");
//
//	return 0;
//}
//
////去掉'\n'
////不会报错，就是不会换行而已
//#include <stdio.h>
//
//int main(void)
//{
//	printf("Hello, World!");
//
//	return 0;
//}
//
////去掉分号
////报错
////分号是C语言语句结尾的标志，不可以缺少
//#include <stdio.h>
//
//int main(void)
//{
//	printf("Hello, World!\n")
//	
//	return 0
//}
//
////去掉int
////可能会报警告，但是可以运行
////C语言中不在函数前加返回类型默认为int
//#include <stdio.h>
//
//main(void)
//{
//	printf("Hello, World!\n");	
//
//	return 0;
//}



////练习1-2：做个实验，当printf()函数的参数字符串中包含\c时观察一下会出现什么情况
//使用不同的转义字符会有不同的输出
//#include <stdio.h>
//
//int main(void)
//{
//    printf("Hello, World!\b");
//
//    return 0;
//}


//变量与算术表达式
#include <stdio.h>
#define UPPER 300 
#define LOWER 0
#define STEP 20

int main(void)
{
    double cel, fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += 20) {
        printf("%.0lf%6lf\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}

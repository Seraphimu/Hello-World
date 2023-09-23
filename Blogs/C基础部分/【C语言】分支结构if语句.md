# C语言分支结构if语句

C语言是一门结构化的编程语言，在C语言中有三大结构，分别是顺序、分支、循环。三大结构顾名思义，顺序结构就是从上至下依次执行，例如定义一个整型变量num，然后给它赋值，如下所示，printf()语句中打印的num的值是3：

```c
int num = 1;
num = 2;
num = 3;
//输出3：
printf("%d", num);
```

接下来叙述以下分支结构：

1. 单分支if语句：表达式A成立则执行语句A：

    ```c
    if(表达式A)
    {
        语句A;
    }
    ```

    实例：

    ```c
    //单分支：
    #include <stdio.h>

    int main(void)
    {
        if(4 > 3)
        {
            //输出：True
            printf("True\n");
        }
        return 0;
    }
    ```

2. 双分支：if……else 语句：表达式A成立则执行语句A，不成立则执行语句B：

    ```c
    if(表达式A)
    {
        语句A;
    }
    else
    {
        语句B;
    }
    ```
    
    实例：

    ```c
    //双分支：
    #include <stdio.h>

    int main(void)
    {
        //4 < 3的条件不成立，故执行else中的语句，输出：False：
        if(4 < 3)
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
        return 0;
    }
    ```

3. 多重选择：else if：表达式A 成立则执行语句A，表达式B成立则执行语句B，表达式C 成立则执行语句C，都不成立则执行else中的内容： 

    ```c
    if(表达式A)
    {
        语句A;
    }

    else if(表达式B)
    {
        语句B：
    }
    else if(表达式C)
    {
        语句C;
    }
    else
    {
        语句D;
    }
    ```

    实例：

    ```c
    #include <stdio.h>

    int main(void)
    {
        float grade = 0;
        printf("请输入你的成绩：\n");
        scanf("%f", &grade);
        //输入的成绩小于0或者大于100都视为输入错误：
        if(grade < 0 || grade > 100)
        {
            printf("输入错误：\n");
        }
        //成绩大于85为优秀
        else if(grade >= 85)
        {
            printf("优秀：\n");
        }
        //大于75为良好：
        else if(grade >= 75)
        {
            printf("良好：\n");
        }
        //大于60为及格：
        else if(grade >= 60)
        {
            printf("及格：\n");
        }
        //其他结果为不及格
        else
        {
            printf("不及格：\n");
        }
        return 0;
    }
    ```

    每次执行程序时分别输入90，80， 70， 50， 101， -8， 输出结果如下：

    ```md
    请输入你的成绩：
    90
    优秀：

    请输入你的成绩：
    80
    良好：

    请输入你的成绩：
    70
    及格：

    请输入你的成绩：
    50
    不及格：

    请输入你的成绩：
    101          
    输入错误：

    请输入你的成绩：
    -8 
    输入错误：
    ```

    > 刚接触这个结构笔者也很懵逼，搞不清楚它为啥能这样，后来才发现，这个写法是下面这种写法的变种：

    ```c
    #include <stdio.h>

    int main(void)
    {
        float grade = 0;
        printf("请输入你的成绩：\n");
        scanf("%f", &grade);
        //大于100小于0视为错误：
        if(grade > 100 || grade < 0)
        {
            printf("输入错误：\n");
        }
        else
            if(grade >= 85)
                printf("优秀：\n");
            else
                if(grade >= 75)
                    printf("良好：\n");
                else
                    if(grade >= 60)
                        printf("及格：\n");
                    else
                        printf("不及格：\n");
        return 0;
    }
    ```

    这个样子看起来很难受，但是，对理解那个else if很有帮助。首先，第一个if语句判断了grade > 100或者 grade < 0的情况下是输入错误，后面接一句else语句，意味输入正确的话，即，grade在0~100之间，则执行else中的内容，然后else中的内容是if(grade >=85)，如果grade >= 85则执行printf("优秀：\n");这个语句，若grade < 85则执行下面的else，以此类推……知道最后一个条件grade >= 60都不满足，则执行printf("不及格：\n");……

4. if和else配对：

    若是如下有多个if和else语句的话，else语句和最近的那条if语句配对：

    ```c
    if(条件A)
        语句A;
    if(条件B)
        语句B;
    else
        语句C;
    ```

    下列语句中的else与花括号外的if配对，if下面的花括号是if的语句块，与这句if语句是一体的: 
    ```c
    if(条件)
    {
        语句;
        if(条件)
            语句;
    }
    else
        语句;
    ```
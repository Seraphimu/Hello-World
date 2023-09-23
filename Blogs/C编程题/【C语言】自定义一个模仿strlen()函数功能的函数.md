# 自定义一个模仿strlen()函数功能的函数


```c
//my_strlen()函数声明，返回字符数组中字符的个数
//参数为字符数组的地址
int my_strlen(char* str);

int main(void)
{
	char ch[] = "test";

	printf("%d\n", my_strlen(ch));

	return 0;
}

int my_strlen(char* str)
{
	int count = 0;

	//检测字符串结尾	
	while (*str != '\0')
	{
		//让计数器自增，计算字符数量
		count++;
		//让指向字符串的指针递增，直至遇到'\0'结束
		str++;
	}

	return count;
}
```

输出结果：
```md
4
```
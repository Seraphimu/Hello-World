#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	//读取文件时存储字符 
	int ch;
	//文件指针 
	FILE * fp;
	//记录文件中的字符数量 
	unsigned long count = 0;
	
	//检查命令行参数， 
	if (2 !=argc)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	//检查文件，文件不存在则退出程序 
	if (NULL == (fp = fopen(argv[1], "r")))
	{
		printf("Can not open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	//获取文件中的字符，直到文件末尾 
	while (EOF != (ch = getc(fp)))
	{
//		等价于putchar(ch); 
		putc(ch, stdout);
		count++;
	}
	//关闭文件 
	fclose(fp);
	printf("File %s has %lu characters.\n", argv[1], count);
	
	return 0;
}
